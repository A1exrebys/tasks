#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
        int climbStairs(int n) {
                if (n == 1 || n == 0)
                        return 1;

                if (num.count(n))
                        return num[n];

                int sum = climbStairs(n - 1) + climbStairs(n - 2);

                num.insert({n, sum});

                return sum;
        }
private:
        unordered_map<int, int> num;
};

#if 0
class Solution {
public:
        int climbStairs(int n) {
                int first = 1, second = 2, num;

                if (n == 1)
                        return first;

                if (n == 2)
                        return second;

                for (int i = 3; i <= n; i++) {
                        int tmp = second;

                        num = first + second;
                        second = num;
                        first = tmp;
                }

                return num;
        }
};

class Solution {
public:
        int climbStairs(int n) {
                int first = 1, second = 2;

                if (n == 1)
                        return first;

                if (n == 2)
                        return second;

                vector<int> nums(n + 1);

                nums[0] = 0;
                nums[1] = first;
                nums[2] = second;

                for (int i = 3; i <= n; i++)
                        nums[i] = nums[i - 1] + nums[i - 2];

                return nums[n];
        }
};
#endif
