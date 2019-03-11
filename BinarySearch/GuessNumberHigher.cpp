#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int left = 1;
		int right = n;
		int mid;

		while (left <= right) {
			mid = left + (right - left) / 2;

			int rv = guess(mid);

			if (rv == 0)
				return mid;
			else if (rv == -1)
				right = mid - 1;
			else if (rv == 1)
				left = mid + 1;
		}

		return -1;
	}
};
