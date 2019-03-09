#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
		findDupicates(root);

		return rv;
	}

	string findDupicates(TreeNode* root) {
		if (root  == NULL)
			return "#";

		string subtree = to_string(root->val) + "," + findDupicates(root->left) + "," + findDupicates(root->right);

		if (hmap.count(subtree)) {
			hmap[subtree]++;

			if (hmap[subtree] == 2)
				rv.push_back(root);
		} else {
			hmap[subtree] = 1;
		}

		return subtree;
	}

private:
	vector<TreeNode*> rv;
	unordered_map<string, int> hmap;
};
