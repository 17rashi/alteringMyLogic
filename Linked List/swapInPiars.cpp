//https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head -> next == NULL){
            return head;
        }
        int temp = head ->next-> val;
        head -> next -> val = head -> val;
        head -> val = temp;
        swapPairs(head -> next ->next);
        return head;
    }
};