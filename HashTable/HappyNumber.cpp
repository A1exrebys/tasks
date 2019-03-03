#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	int getsum(int num) {
		int ssum = 0;

		while (num > 0) {
			ssum += ((num % 10) * (num % 10));
			num = num / 10;
		}

		return ssum;
	}

	bool isHappy(int n) {
		unordered_set<int> nums;

		while (n != 1) {
			int sqrsum = getsum(n);

			if (nums.count(sqrsum)) {
				return false;
			} else {
				nums.insert(sqrsum);
			}

			n = sqrsum;
		}

		return true;
	}
};
