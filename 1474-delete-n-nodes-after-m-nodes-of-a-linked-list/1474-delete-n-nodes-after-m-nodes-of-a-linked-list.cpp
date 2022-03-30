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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        if(!head || !head->next) return head;
    ListNode* temp = head;
    while(temp && temp->next) {
        int k = m-1;
        while(k-- && temp) {
            temp = temp->next;
        }
        ListNode* prev = temp;
        int l = n+1;
        while(l-- && temp) {
           temp = temp->next;
        }
        if(prev) prev->next = temp;
    }
        
    return head;
    }
    
};