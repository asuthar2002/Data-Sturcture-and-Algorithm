​
// excluding base case of if one elemet or NUll is present
// ListNode * curr=head, *prev=NULL,*nextpt;
// while(curr!=NULL)
// {
//     nextpt=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=nextpt;
// }
// head=prev;
// return head;
if(head == NULL || head->next == NULL )
{
return head;
}
ListNode*newhead = reverseList(head->next);
ListNode*headnext = head->next;
headnext->next = head;
head->next = NULL;
return newhead;