//https://leetcode.com/problems/add-two-numbers/

/*naive appraoch*/

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
    ListNode* insert(ListNode* newList,int ans){
        ListNode* newNode = new ListNode();
        newNode -> val = ans;
        newNode -> next = newList;
        return newNode;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while(curr!=NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newList = NULL;
        ListNode* ans = NULL;
        int carry = 0;
        while(l1!=NULL || l2!=NULL){
            int sum=0;
            if(l1!=NULL && l2!=NULL)
            {
                sum = l1->val + l2->val+carry;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1==NULL && l2!=NULL){
                sum = l2->val+carry;
                l2 = l2->next;
            }   
            else{
                sum = l1->val+carry;
                l1=l1->next;
            }
            int res = sum%10;
            newList = insert(newList,res);
            carry = sum/10;
        }
        if(carry!=0){
            newList = insert(newList,carry);
        }
        ans = reverseList(newList);
        return ans;
    }
};

