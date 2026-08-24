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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1= list1;
        ListNode* temp2= list2;
        ListNode* newN= new ListNode (0);
        ListNode* temp3=newN;
        if(temp1 == nullptr ) return temp2;
        if(temp2 == nullptr ) return temp1;
        

        while( temp1 != nullptr && temp2 != nullptr){
            if(temp1->val <= temp2->val){
                newN->next= temp1;
                temp1=temp1->next;
            }

            else{
                newN->next= temp2;
                temp2=temp2->next;
                
            }
            newN=newN->next;
            
        }

        if(temp1 != nullptr) {
            newN->next=temp1;
        }
        else{
            newN->next=temp2;
        }

        return temp3->next;

        
    }
};