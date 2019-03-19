#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> findClosestElements(vector<int>& A, int k, int x) {
		int left = 0;
		int right = A.size() - k;

		while (left < right) {
			int mid = left + (right - left) / 2;

			if (x - A[mid] > A[mid + k] - x)
				left = mid + 1;
			else
				right = mid;
		}

		return vector<int>(A.begin() + left, A.begin() + left + k);
	}
};
