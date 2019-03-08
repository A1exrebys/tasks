#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int kthGrammar(int N, int K) {
		if (N == 1)
			return 0;

		return (~K & 1) ^ kthGrammar(N-1, (K+1)/2);
	}
};

#if 0
class Solution {
public:
	int kthGrammar(int N, int K) {
		int ret = 0;

		K--;

		while (K) {
			ret ^= (K & 0x1);
			K >>= 1;
		}

		return ret;
	}
};
#endif