Node* reverse(Node *head)
{
    Node *current = head;
    Node *prev=NULL,*next=NULL;
    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
