#inlude<bits/stdc++.h>
using namespace std;
class node()
{
    public:
    int data;
    int *next;
};
node *top=null;
void push(value){
    node * new_node=New node();
    new_node->data=value;
    new_node->next=top;
    top=node;
}
void pop(){
    if(top==NULL)
    {
        cout<<"already empty"
    }
    else{
        top=top->next;
    }
  
void display(){
    while(top!=NULL){
        cout<<top->data;
        top=top->next;
    }
}
int main(){
    cout<<"enter choice"<<endl;
    cout<<"1 for inserting new element"<<endl;
    cout<<"2 for deleting last element"<<endl;
    cout<<"3 for displaying the stack"<<endl;
    cout<<"4 for exit"<<endl;
    cin>>choice;
    for(;;){
        switch(choice){
            case 1:
                cout<<"enter the element";
                cin>>value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;    
            case 4:
                cout<<"exit intitaited"<<endl;
                return 0;
        }   
    }
    return 0;
}
