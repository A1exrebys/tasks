#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	double powMe(double x, long long int n) {
		if (n == 0)
			return 1.0;

		double num = powMe(x, n / 2);

		if (n % 2 == 0)
			return num * num;
		else
			return num * num * x;
	}

	double myPow(double x, int n) {
		long long int pow = n;

		if (pow < 0) {
			x = 1/x;
			pow = -pow;
		}

		return powMe(x ,pow);
	}
};

#if 0
class Solution {
public:
	double myPow(double x, int n) {
		long long int pow = n;

		if (pow < 0) {
			x = 1/x;
			pow = -pow;
		}

		double res = 1.0;
		double current = x;

		for (long long int i = pow; i > 0; i /= 2) {
			if ((i % 2) == 1)
				res = res * current;

			current = current * current;
		}

		return res;
	}
};
#endif

#if 0
class Solution {
public:
	double myPow(double x, int n) {
		long long int pow = n;

		if (pow < 0) {
			x = 1/x;
			pow = -pow;
		}

		double res = 1.0;

		for (int i = 0; i < pow; i++)
			res = res * x;

		return res;
	}
};
#endif