void print(){
        node*temp=head;
        if(head==NULL){
            cout<<"list empty"<<endl;

            return;
        }

        while(temp!=NULL){
            
            cout<<temp->data<<" ";
            temp=temp->link;
        }