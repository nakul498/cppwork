#include<bits/stdc++.h>
using namespace std;
class Data{
    public:
    int ele;
    Data* next;
    Data(int ele){
        this->ele=ele;
        next=nullptr;
    }
};
class LinkedList{
    Data* start;
    Data* tail;
    int s;
    public:
    LinkedList(){
        start= tail = nullptr;
        s=0;
    }
    void push(int ele){
        Data* d=new Data(ele);
        if(s==0){
            start=d;
            tail=d;
            s++;
            return;
        }   
        tail->next=d;
        tail=tail->next;
       // tail=d; line 27 and 28 have same meaning
        s++;
    }
    int size(){
        return s;
    }
    void display(){
        Data* temp= start;
        while(temp!=nullptr){
            cout<<temp->ele<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList l1;
    l1.push(12);
    l1.push(13);
    l1.push(2);
    cout<<l1.size()<<endl;
    l1.display();
}
//list geeksforgeeks