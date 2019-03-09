#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int right = nums.size() - 1;
		int left = 0;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (nums[mid] > target) {
				right = mid - 1;
			} else if (nums[mid]  < target) {
				left = mid + 1;
			} else {
				return mid;
			}
		}

		return -1;
	}
};
