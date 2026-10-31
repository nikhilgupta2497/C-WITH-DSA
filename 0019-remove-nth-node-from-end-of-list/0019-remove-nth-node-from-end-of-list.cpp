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
        int count = 0;
        ListNode* current = head;
        while(current!=NULL){
            count++;
            current = current->next;
        }int m = count-n;
        if(m==0){
            ListNode* node = head;
            head = head->next;
            delete node;
            return head;
        }
        current = head;
        for(int i = 0;i<m-1;i++){
            current = current->next;
        }
        ListNode* node = current->next;
        current->next = current->next->next;
        delete node;
        return head;
    }
};
