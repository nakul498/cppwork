#include<bits/stdc++.h>
using namespace std;
class factorial{
    int facto,number;
    public:
    int cal(int n){
    if(n==1)
    return 1;
    return n*cal(n-1);
    }
    int calculate(int n){
        facto=cal(n);
        return facto;
    }
    int display(){
        cout<<"value of facto is"<<facto<<"\nvalue of number is "<<number<<endl;
        return 0;
    }
};
int main(){
    factorial* s1=new factorial();
    int n;
    cin>>n;
    s1->calculate(n);
    s1->display();
    return 0;
}