#include<bits/stdc++.h>
using namespace std;
int test(vector <char> *arr){
    int i;
    int x=arr.length();
    vector <char> arr1(x),arrb(x);
    for(i=0;i<x;i++){
        if(x=='A')
            arr1.push_back(x);
        else
            arr2.push_back(x);
    }
    for(i=0;i<arr1.lenght();i++){
        arr[i]=arr1[i];
        cout<<arr[i];
    }    
    j=i;
    j--;    
    for(i=0;i<arr2.length();i++){
        arr[j]=arr2[i];
        cout<<arr[j];    
        j++;    
    }    
    return 0;
}
int main() 
{ 
    char x;
    vector <char> arr(10);
    for(i=0;arr[i]!='\n';i++){
        cin>>x;
        arr.push_back(x)
    }
    test(&arr)
 return 0; 
}
