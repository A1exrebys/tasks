#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
	   if (head == NULL || head->next == NULL)
	       return head;

	    ListNode *p = reverseList(head->next);
	    head->next->next = head;
	    head->next = NULL;

	    return p;
	}
};

#if 0
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next;

        while (curr != NULL) {
            *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};
#endif
