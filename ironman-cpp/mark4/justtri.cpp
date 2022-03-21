#include<bits/stdc++.h>
using namespace std;
int cal(int n){
    if(n==1)
    return 1;
    return n*cal(n-1);
}
int main(){
    int no;
    cout<<"enter number"<<endl;
    cin>>no;
    int factorial=cal(no);
    cout<<"factorial is"<<factorial<<endl;
}
