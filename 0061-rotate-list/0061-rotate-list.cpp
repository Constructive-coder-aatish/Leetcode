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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == nullptr || head->next == nullptr || k == 0)
        return head;

        int len=0;
        ListNode* temp=head;

        while(temp!= nullptr){
            len++;
            temp=temp->next;
        }

        k=k% len;


        while(k>0){

            ListNode* temp=head;
            ListNode* prev= nullptr;

            while(temp->next!=nullptr){
                prev=temp;
                temp=temp->next;
            }

            prev->next=nullptr;
            temp->next=head;
            head=temp;
            k--;
        }
        return head;
        
    }
};