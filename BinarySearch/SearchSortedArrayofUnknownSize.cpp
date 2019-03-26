#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int search(const ArrayReader& reader, int target) {
		int left = 0, right = INT_MAX;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			int num = reader.get(mid);

			if (num == target)
				return mid;
			else if (num < target)
				left = mid + 1;
			else
				right = mid - 1;
		}

		return -1;
	}
};
