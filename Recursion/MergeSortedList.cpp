#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL)
			return l2;

		if (l2 == NULL)
			return l1;

		if (l1->val <= l2->val) {
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		} else {
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;
		}
	}
};

#if 0
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode *newlist = new ListNode(0);

		ListNode *res = newlist;

		while (l1 != NULL && l2 != NULL) {
			if (l1->val <= l2->val) {
				res->next = l1;
				l1 = l1->next;
			} else {
				res->next = l2;
				l2 = l2->next;
			}

			res = res->next;
		}

		res->next = l1 == NULL? l2 : l1;

		return newlist->next;
	}
};
#endif