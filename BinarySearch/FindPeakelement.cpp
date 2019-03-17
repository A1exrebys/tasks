#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findPeakElement(vector<int>& nums) {
		int peak;

		for (peak = 0; peak < nums.size() - 1; peak++) {
			if (nums[peak] > nums[peak + 1])
				return peak;
		}

		return nums.size() - 1;
    }
};
