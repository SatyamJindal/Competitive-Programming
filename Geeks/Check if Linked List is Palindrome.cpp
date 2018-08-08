bool isPalindrome(Node *head)
{
    string s;
    while(head!=NULL)
    {
        s+=std::to_string(head->data);
        head = head->next;
    }
    bool ans=1;
    int le=0,ri=s.size()-1;
    while(le<=ri)
    {
        if(s[le]!=s[ri])
        {
            ans=0;
            break;
        }
        le+=1;
        ri-=1;
    }
    return ans;
}
