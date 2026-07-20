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
    ListNode* reverse(ListNode* l){
        ListNode* temp=l;
        ListNode* prev=NULL;
        while(temp){
            ListNode* forw=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forw;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l11, ListNode* l22) {
        ListNode* l1=reverse(l11);
        ListNode* l2=reverse(l22);
        // reverse(l);
        ListNode* dummy=new ListNode(0); 
        ListNode* head=dummy;
        int carry=0;
        ListNode* t1=l1;
        ListNode* t2=l2;
        while(t1 && t2){
            int val=(t1->val)+(t2->val)+carry;
            carry=val/10;
            ListNode* x=new ListNode(val%10);
            head->next=x;
            head=x;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1){
            int val=(t1->val)+carry;
            carry=val/10;
            ListNode* x=new ListNode(val%10);
            head->next=x;
            head=x;
            t1=t1->next;
        }
        while(t2){
            int val=(t2->val)+carry;
            carry=val/10;
            ListNode* x=new ListNode(val%10);
            head->next=x;
            head=x;
            t2=t2->next;
        }
        if(carry){
            ListNode* x=new ListNode(carry);
            head->next=x;
            head=x;
        }
        ListNode* ans=reverse(dummy->next);
        return ans;
    }
};