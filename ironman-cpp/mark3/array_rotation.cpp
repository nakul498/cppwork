#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int arr2[9];
    int rot,i;
    cout<<"rotaote right by how many position";
    cin>>rot;
    for(i=0; i<9;i++){
        arr2[(i+rot)%9]=arr[i];
    }
    for(i=0;i<9;i++){
        cout<<arr2[i]<<endl;
    }
}
/*int main(){
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int arr2[9];
    int rot,i;
    cout<<"rotaote right by how many position";
    cin>>rot;
    for(int j=0; j< rot; j++){
        for(i=0; i<9;i++){
            arr2[(i+1)%9]==arr[i];
        }
        for(i=0;i<10;i++){
            cout<<arr2[i]<<endl;
        }
    }    
}*/