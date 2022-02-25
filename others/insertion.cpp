#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    int * next;
};
void insert(int new_data){
    node* new_node=NULL;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
int main(){
    insert(3);
    
}