#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int lower(vector<int>& nums, int target)
	{
		int left = 0, right = nums.size() - 1;
		int res = -1;

		while(left <= right){
			int mid = left + (right - left) / 2;

			if (nums[mid] == target){
				res = mid;
				right = mid - 1;
			}

			if (nums[mid] > target)
				right = mid -1;
			else
				left = mid + 1;
		}

		return res;
	}

	int upper(vector<int>& nums, int target)
	{
		int left = 0, right = nums.size() - 1;
		int res = -1;

		while(left <= right){
			int mid = left + (right - left) / 2;

			if (nums[mid] == target){
				res = mid;
				left = mid + 1;
			} else if (nums[mid] > target)
				right = mid -1;
			else
				left = mid + 1;
		}

		return res;
	}

	vector<int> searchRange(vector<int>& nums, int target) {
		if (nums.size() == 0)
			return {-1, -1};

		int left = lower(nums, target);
		int right = upper(nums, target);

		return {left, right};
	}
};

#if 0
class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (nums[mid] == target) {
				int i = mid;

				while (i >= 0 && nums[i] == target)
					i--;

				while (mid < nums.size() && nums[mid] == target)
					mid++;

				return {i + 1, mid - 1};
			}

			if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}

		return {-1, -1};
	}
};
#endif