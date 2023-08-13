// https://leetcode.com/contest/weekly-contest-358/problems/double-a-number-represented-as-a-linked-list/

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
    
    void rec(ListNode *head,int &carry){
        if(head==NULL) return;
        
        rec(head->next,carry);
        
        carry+=(head->val)*2;
        head->val=carry%10;
        carry/=10;
        
    }
    
    ListNode* doubleIt(ListNode* head) {
        
        int carry=0;
        rec(head,carry);
        
        if(carry){
            ListNode *root=  new ListNode(carry);
            root->next=head;
            head=root;
        }
        return head;
    }
};
