//array roatation using pointers
#include<bits/stdc++.h>
using namespace std;
int *rotation(int* arr,int rot,int n){
    for(i=0;i<n;i++){
       *arr=*arr +rot
    }     
    return 0;
}
int main(){
    int i,n,rot;
    int* p;
    cout<<"enter size of array";
    cin>>n; 
    int arr[n];
    cout<< "enter array elements";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter rotation"<<endl;
    cin>>rot;
    p=rotation(&arr[0],rot,n);
    for(i=0;i<n;i++)
        cout<<p[i];
    return 0;
}
