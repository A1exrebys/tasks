#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool isPerfectSquare(int num) {
		int left = 0, right = num / 2;

		if (num == 0 || num == 1)
			return true;

		while (left <= right) {
			long long int mid = left + (right - left) / 2;

			long long int sqr = mid * mid;

			if (sqr == num)
				return true;
			else if (sqr < num)
				left = mid + 1;
			else
				right = mid - 1;
		}

		return false;
	}
};
