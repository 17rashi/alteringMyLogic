//https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    int countNodes(ListNode* head){
        int count=0;
        while(head!=NULL){
            count++;
            head = head -> next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head-> next == NULL)
            return NULL;
        ListNode* temp = head;
        int m = countNodes(head) - n;
        int count=1;
        if(m==0){
            head = head -> next;
            return head;
        }
        while(head -> next != NULL){
            if(count<m){
                count++;
                head = head -> next;
            }
            else{
                head -> next = head -> next -> next;
                break;
            }
        }
        return temp;
    }
};