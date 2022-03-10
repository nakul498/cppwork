#include<bits/stdc++.h>
using namespace std;
//vector is container, also class created in backgraound like strings  
//it drived from arrays
int main(){
    //initializtion method 1
    vector<int> arr;

    cout<<arr.size()<<endl;
    //method2
    vector<int> arr2{1,2,3,4,5}; // or vector<int> arr={1,2,3,4,5}
    cout<<arr2.size()<<endl;
    //method 3
    vector<int> arr3(10);
    //to create a empty vector of size 10;
    cout<<arr3.size()<<endl;
    vector<int> arr4(10,-1);
    // to create a vector with a defaut value -1 is default value of all elements
    for(int x : arr4){
        cout<<x<<endl;
    }
    //input in vectors
    int n;
    cin>>n;
     vector<int> arr5(n,-1);
   // vector<int*> ptr= arr5;
   for(int i=0; i<n ;i++){
        cin>>arr5[i];
    }
    //we cannot use for each loop for taking input as below int i is not a rreference 
    //for arr5 but it is copy of it


    for(int x:arr5){
        cout<<x<< endl;
    }
    vector<int> arr6;
    cout<<"sizr of arr6 "<<arr6.size()<<endl;
    arr6.push_back(1);
    arr6.push_back(45);
    cout<<arr6.size();
    return 0;
}
