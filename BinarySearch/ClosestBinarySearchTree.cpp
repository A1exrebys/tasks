#include <iostream>

using namespace std;

class Solution {
public:
        int closestValue(TreeNode* root, double target) {
                int min = root->val;

                while (root != NULL) {
                        min = abs(target - root->val) < abs(min - target) ? root->val : min;

                        if (root->val < target)
                                root = root->right;
                        else
                                root = root->left;
                }

                return min;
        }
};
