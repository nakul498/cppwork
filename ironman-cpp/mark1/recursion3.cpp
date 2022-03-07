#include<bits/stdc++.h>
using namespace std;
int calculate (int base, int n){
    if(n ==0 ) return 1;
    int product=calculate(base,n/2);
    if(n%2==0) return product*product;
    else return base*product*product;   
}
int main(){
    cout<<"enter number and it power";
    int a,b;
    cin>>a>>b;
    cout<<"resutlt is: "<<calculate(a,b); 
    return 0;
}