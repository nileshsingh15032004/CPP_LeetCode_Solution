/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) 
{
	ListNode *start, *h, *prev = nullptr;

	for(h = head; n--; m--)
		if(m>0)
			start = exchange(prev, exchange(h, h->next));
		else
			prev  = exchange(h, exchange(h->next, prev));

    if(start)
        start->next->next = h, start->next = prev;
    else
        head->next = h, head = prev;

	return head;
}
};
