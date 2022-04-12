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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr=head;
        
        int len=0;
        
            while(ptr!=NULL)
            {
                ptr=ptr->next;
                len++;
                
            }
        ptr=head;
        int arr[len];
        for(int i=0;i<len;i++)
        {
            arr[i]=ptr->val;
            ptr=ptr->next;
        }
        int temp=0;
        int i=0;
        int j=len-1;
        while(i<=j)
        {
            
            if(arr[i]==arr[j])
            {
                i++;
                j--;
            }
            else
            {
                temp=1;
                break;
            }
            
        }
        if(temp==1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
        
    
        
        
      return true;  
    }
};