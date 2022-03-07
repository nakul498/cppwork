//print elements off array using pointer
#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[20]={'0','1','2','3','4','5','\0','6','7','8','9'},i;
    char* p=arr;
    char** b=&p;
    cout<<*p<<endl;
    cout<<b<<endl;

    for(i=0;i<10;i++){
        cout<<*(arr+i)<<endl;
    }
    return 0;
}