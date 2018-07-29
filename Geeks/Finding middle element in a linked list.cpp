int getMiddle(Node *head)
{
    int ans;
    Node *sto = head;
    int count=0;
    while(sto!=NULL)
    {
        count+=1;
        sto = sto->next;
    }
    count/=2;
    count+=1;
    while(1)
    {
        count-=1;
        if(count==0)
        {
            ans=head->data;
            break;
        }
        else
        {
            head=head->next;
        }
        
    }
    
    
    return ans;
}
