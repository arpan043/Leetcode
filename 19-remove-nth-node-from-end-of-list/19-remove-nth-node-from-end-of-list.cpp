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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start=new ListNode(); 
        start->next=head;
        ListNode *slow=start,*fast=start;
        int count = n;
        while(count > 0)
        {
            fast = fast->next;
            count--;
        }
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode *del=slow->next; 
        slow->next=slow->next->next; 
        delete(del); 
        return start->next;
    }
};