//https://leetcode.com/problems/rotate-list/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || (head==NULL)){
            return head;
        }
        ListNode* curr=head;
        int len=1;
        while(curr->next!=NULL){
            curr=curr->next;
            len++;
        }
        // ListNode* temp=head;
        curr->next=head;
        while(k>len){
            k=k-len;
        }
        int ans=len-k;
        int count=0;
        cout<<ans<<endl;
        while(count<ans){
            count++;
            curr=curr->next;
        }
        
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};