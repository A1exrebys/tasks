#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 0);

        for (int i = 0; i <= rowIndex; i++) {
            res[0] = 1;     /* first alwasy equal to 1*/
            res[i] = 1;     /* last always eqaul to 1 */

            for (int j = i - 1; j > 0; j--)
                res[j] = res[j - 1] + res[j];
        }

        return res;
    }
};
