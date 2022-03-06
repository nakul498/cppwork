#include<bits/stdc++.h>
using namespace std;
//wap to check eligible for voting or not;
/*
bool check(int n){
    if(n>=18)
    return true;
    return false;
}
int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    if(check(age)){
        cout<<"he can vote"; 
        return 0;
    }
    cout<<"not eligible";
    return 0;
}*/
bool is_eligible(int age){
    return age>=18?true:false;
}
int main(){
    string name;
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter age: "<<endl;
    int age;
    cin>>age;
    if(is_eligible(age)){
        cout<<name<<" is eligible to vote"<<endl;
    }else{
        cout<<name<<" is not eligible to vote"<<endl;
    }
}