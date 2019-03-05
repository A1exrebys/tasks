#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int fib(int N) {
        if (N == 0)
            return 0;

        if (N == 1)
            return 1;

        vector<int> res(N + 1, 0);
        res[1] = 1;

        for (int i = 2; i <= N; i++) {
            res[i] = res[i - 1] +res[i - 2];
        }

        return res[N];
    }
};

#if 0
class Solution {
public:
    int fib(int N) {
        if (N < 2)
            return N;

        if (hmap.count(N))
            return hmap[N];

        int rv = fib(N - 1) + fib(N - 2);

        hmap.insert({N, rv});

        return rv;
    }

private:
    unordered_map<int, int> hmap;
};
#endif
