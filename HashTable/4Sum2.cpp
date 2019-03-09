#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
		unordered_map<int, int> sums;
		int cnt = 0;

		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < A.size(); j++) {
				if (sums.count(A[i] + B[j]))
					sums[A[i] + B[j]]++;
				else
					sums[A[i] + B[j]] = 1;
				}
		}

		for (int i = 0; i < C.size(); i++) {
			for (int j = 0; j < D.size(); j++) {
				if (sums.count(-(C[i] + D[j])))
					cnt += sums[-(C[i] + D[j])];
			}
		}

		return cnt;
	}
};