#include<bits/stdc++.h>
using namespace std;
int main(){
//    int no;
    char enter[5];
//    cin>>no;
//    int arr[no][no]={0};
 //   for(int i=0;i<no;i++){
        for(int i=0;enter[i]!='\n';i++)
        cin>>enter[i];
        cout<<"starting"<<endl;
        for(int j=0;j<=5;j++){
            cout<<enter[j]<<endl;
        }
//    }  
    /*for(i=0;i<no;i++){
        for(j=0;j<no;j++){
             if(arr[i][j]=='\n') break;
             cout<<arr[i][j];
        }
        cout<<endl;
    } */ 
    return 0;        
}