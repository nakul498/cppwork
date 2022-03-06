#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    if(b%2==0||b==1){
        if(b%5==0)
            if(b>a)
                return true;
        if(a%5!=0)        
            if(b>a)
                return true; 
        if(a%2!=0)
            return true;         
    }   
    if(b%5==0&&a%2!=0)
        if(b>a)
            return true;
   return false;
}

void selection_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        int min_in = i;

        for(int j = i+1 ; j < arr.size() ; j++){
            if(cmp(arr[min_in] , arr[j])){
                min_in = j;
            }
        }

        swap(arr[i],arr[min_in]);
    }
}

void display(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    int n,t,i;
    cin>>t>>n;
    vector<int> arr(n,0);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Arr before sorting: "<<endl;
    display(arr);
    selection_sort(arr);
    cout<<"Arr after sorting: "<<endl;
    display(arr);
}