#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    ++a;
}

void incre_by_address(int *ptr){
    (*ptr)++;
}

void incre_by_reference(int &b){
    b++;
}

int main(){
    float b=1.7;
    int a = 10;

    // incre_by_value(a);
    // incre_by_address(&a);
    // incre_by_reference(a);
    // cout<<a<<endl;
    cout<<int(b);
    cout<<(int)b;
    return 0;
}