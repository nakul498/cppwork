#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    int HackArr[] = {1,1,5,5,2,2,7};
    for(i=0;i<7;i++){
        j=i;
        while(j>0&&(HackArr[j])<HackArr[j-1]){
            k=HackArr[j];
            HackArr[j-1]=k;
            j=j-1;
        }
    }
    for(auto x:HackArr){
        cout<<x;
    }
}