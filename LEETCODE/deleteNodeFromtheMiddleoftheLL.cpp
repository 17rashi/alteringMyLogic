//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

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
        return count/2;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        int m=countNodes(head);
        int counter=1;
        while(head-> next !=NULL){
            if(counter<m){
                head = head -> next; 
                counter++;
            }
            else{
                head->next = head -> next -> next;
                break;
            }
        }
        
        return temp;
    }
};

//Optimized approch

/*
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head == NULL or head->next == NULL)
            return NULL;
        
        ListNode *slow = head, *fast = head, *temp;
        
        while(fast != NULL and fast->next != NULL)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        temp->next = slow->next;
        return head;
    }
};
*/