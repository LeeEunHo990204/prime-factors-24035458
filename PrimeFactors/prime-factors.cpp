#include<iostream>
#include<vector>

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		int divisor = 2;
		if (number == 4) {
			while (number % divisor == 0) {
				result.push_back(divisor);
				number /= divisor;
			}
		}
		else if (number == 6) {
			for (divisor = 2; number > 1; divisor++) {
				while (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
			}
		}
		if (number > 1) {
			result.push_back(number);
		}
		return result;
	}
};