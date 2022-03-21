#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,flag1,flag0,large;
    int arr[30][30],arr2[30][30];
    cout<<"enter no of elements";
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];
    large=0;
    for(i=1;i<n-1;i++){
        flag0=1;flag1=0;
        for(j=1;j<n-1;j++){
            if(arr[i][j]==0){
                flag0=1;     
                continue;
            }
            if(arr[i][j]==1){
                if(arr[i][j-1]==0){
                    large=large++;
                    arr[i][j]=large;
                }        
                else
                    arr[i][j]=arr[i][j-1];  
                if(arr[i-1][j]!=0 && arr[i-1][j]<arr[i][j]){
                    large--;
                    arr[i][j]=arr[i-1][j];
                }      
                flag1=1;
                flag0=0;    
            }     
        }      
    }        
    cout<<large<<endl;
     for(i=1;i<n-1;i++){
         for(j=1;j<n-1;j++)
             cout<<arr[i][j]<<" ";
         cout<<endl;
     }
    return 0;
}           
/*if(arr[i][j]==1){
                arr[i][j]=arr[i][j]+current;
                if(arr[i][j-1]!=0){
                    x=min(arr[i][j-1]);
                    arr[i][j]=x=arr[i][j-1];
                }
                else 
            }
            else
                current++;
        }  

        current=0;  */