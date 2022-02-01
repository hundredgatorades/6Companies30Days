void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        Node *n = head;
        while(n)
        {
            for(int i=1;i<M && n;i++)
            {
                n=n->next;
            }
            if(!n)
                return;
            Node *temp=n;
            for(int j=0;j<=N && temp;j++)
            {
                temp=temp->next;
            }
            n->next=temp;
            n=temp;
        }
    }