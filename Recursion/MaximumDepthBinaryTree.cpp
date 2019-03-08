#include <iostream>

using namespace std;

class Solution {
public:
        void GetDepth(TreeNode * root, int depth){
                if (root == NULL)
                        return;

                if (!root->left && !root->right)
                        d = max(depth, d);

                        GetDepth(root->left, depth + 1);
                        GetDepth(root->right, depth + 1);
        }

         int maxDepth(TreeNode* root) {
                GetDepth(root, 1);
                return d;
        }
private:
        int d;
};