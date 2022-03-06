#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
   // int* ptrptr=&ptr;   error as when we write int* it means it is pointer of int type
   // but here we can use it as pointer is not int type its int* type
   int**ptrTptr=&ptr;  // (int*)* ptrTpro=&ptr;

    return 0; 
}