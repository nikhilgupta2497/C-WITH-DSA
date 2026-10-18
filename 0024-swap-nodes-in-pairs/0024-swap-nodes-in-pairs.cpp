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
    ListNode* swapPairs(ListNode* head) {
        int k = 2;
        int i = 0;
        ListNode* temp = head;
        while(i<k){
            if(temp==NULL){
                return head;
            }
            temp = temp->next;
            i++;
        }
        ListNode* prevnode = swapPairs(temp);
        temp = head;
        i=0;
        while(i<k){
            ListNode* next = temp->next;
            temp->next = prevnode;
            prevnode = temp;
            temp = next;
            i++;
        }
        return prevnode;
        
    }
};