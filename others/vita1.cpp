#include<bits/stdc++.h>
using namespace std;
int main(){
    int no,i,j;
    cin>>no;
    int arr[no][no]={0};
    for(i=0;i<no;i++){
        for(j=0;j<no;j++){
             if(arr[i][j]=='\n') break;
             cin>>arr[i][j];
        }
    }  
    for(i=0;i<no;i++){
        for(j=0;j<no;j++){
             if(arr[i][j]=='\n') break;
             cout<<arr[i][j];
        }
        cout<<endl;
    }  
    return 0;        
}