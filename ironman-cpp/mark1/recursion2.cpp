#include<bits/stdc++.h>
using namespace std;
//wap to calcualate power function input a,b return a^b i.e. pow(a,b) without using it 
/*int powered(int a, int b){
    int ans=0;
    if(b==0) return 1;
    ans=powered(a,b-1); 
    return ans*a;
}*/
int calculate (int base, int powerraised){
    if(powerraised != 0)
        return( base*calculate(base,powerraised-1));
    else 
        return 1;
}
int main(){
    cout<<"enter number and it power";
    int a,b;
    cin>>a>>b;
    cout<<"resutlt is: "<<calculate(a,b); 
    return 0;
}