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
        ListNode* tail = head;
        if(head==NULL || head->next==NULL||k==0){
            return head;
        }
        int length = 1;
        while(tail->next!=NULL){
            tail = tail->next;
            length++;
        }
         k = k % length;
        if (k == 0) return head;

        tail->next=head;
        ListNode* newtail = head;
        for(int i=0;i<length-k-1;i++){
            newtail = newtail->next;
        }ListNode* newhead = newtail->next;
        newtail->next = NULL;  
        return newhead;     
    }
};