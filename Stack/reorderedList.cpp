class Solution {
public:
    void reorderList(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        stack<ListNode*> s;
        while(temp!=NULL){
            s.push(temp);
            temp=temp->next;
            count++;
        }
        
        ListNode* first=head;
        int len=count/2;
        ListNode* temp1=NULL;
        ListNode* store=NULL;
        while(len>0){
            temp1=s.top();
            store=first->next;
            first->next=temp1;
            temp1->next=store;
            
            first=store;
            len--;
            s.pop();
        }
        if(len%2==0){
            first->next=NULL;
        }
        else{
            first->next->next=NULL;
        }
    }
};