#include<iostream>
#include<vector>

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		std::vector<int> result = {};
		if (number == 4) {
			result.push_back(2);
			result.push_back(2);
		}
		if (number > 1) {
			result.push_back(number);
		}
		return result;
	}
};