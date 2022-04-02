//https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1/#

int count(struct node* head, int search_for)
    {
        int counter =0;
        while(head!=NULL){
            if(head -> data == search_for){
                counter++;
            }
            head = head -> next;
        }
        return counter;
    }