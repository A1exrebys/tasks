#include <iostream>

using namespace std;

class Solution {
public:
	int firstBadVersion(int n) {
		int left = 0;
		int right = n;
		int first_bad = -1;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (isBadVersion(mid) == true) {
				first_bad = mid;
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}

		return first_bad;
    }
};
