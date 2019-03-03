#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		return swapR(head);
	}

	ListNode* swapR(ListNode* node) {
		if (node == NULL)
			return NULL;

		if (node->next == NULL)
			return node;

		ListNode* ptr = node->next;

		node->next = swap(node->next->next);
		ptr->next = node;

		return ptr;
	}
};

#if 0
ListNode* swapPairs(ListNode* head) {
	ListNode **newhead = &head;
	ListNode *ptr1, *ptr2 ;

	while ((ptr1 = *newhead) && (ptr2 = ptr1->next)) {
		ptr1->next = ptr2->next;
		ptr2->next = ptr1;

		*newhead = ptr2;
		newhead = &(ptr1->next);
	}

	return head;
}
};
#endif
