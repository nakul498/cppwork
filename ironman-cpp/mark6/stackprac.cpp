#include<bits/stdc++.h>
using namespace std;
class Stack{   
    vector<int>arr;
    int s=0;
    int top_idx=-1;
    public:
    Stack(){
        arr= vector<int>(10);
    }
    Stack(int n){
        arr= vector<int>(n);
    }

    void push(int x){
        if(s>=10)
            cout<<"stack overflow"<<endl;
        top_idx++;
        arr[top_idx]=x;
        s++;
    }
    void pop(){
        if(s<1)
            cout<<"stack underflow"<<endl;
        top_idx--;
        s--;    
    }
    int top(){
        return arr[top_idx];
    }
    int size(){
        return s;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(s.size()!=0){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}