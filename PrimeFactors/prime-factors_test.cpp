#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;
using namespace std;

class PrimeFixture : public Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}