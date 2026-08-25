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

        ListNode* fast=head;
        ListNode* slow=head;

        while(n>0){
            fast=fast->next;
            n--;
        }

        if(fast==nullptr) return slow->next;

        while(fast->next != nullptr){
            fast=fast->next;
            slow=slow->next;
        }

        ListNode* del=slow->next;
        slow->next=del->next;

        delete del;

        return head;



        // if (head == nullptr) return head;

        // ListNode* temp=head;
        // ListNode* prev= nullptr;
        // int len=0;

        // while(temp != nullptr){
        //     len ++;
        //     temp=temp->next;
        // }

        // temp=head;

        // int del=len -n +1;

        

        // if(head==nullptr) return head;
        // if(del==1){
        //     head=temp->next;

        //     delete temp;
        //     return head;
        // }

        // for(int i=1; i<del-1; i++){
        //     temp=temp->next;
           
        // }

        // if(temp==nullptr || temp->next==nullptr) return head;

        // ListNode* dele= temp->next;
        // temp->next=temp->next->next;

        // delete dele;
        // return head;
    }
};