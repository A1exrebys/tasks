#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		int start = 0, end = x;
		long long unsigned int num = 0;
		long long unsigned int ret, mid;

		while (start <= end) {
			mid = start + (end - start) / 2;

			num = mid * mid;

			if (num < x) {
				start = mid + 1;
				ret = mid;
			} else if (num > x) {
				end = mid - 1;
			} else {
				return mid;
			}
		}

		return ret;
	}
};
