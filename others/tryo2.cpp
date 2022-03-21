//wap to input no of exams and markes attained , we have to tell how many ques attempted , done wrong or not done
//3 for right -1 for wrong 0 for not attempted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0,three=0,one=0;
    cin>>a>>b;
    three=b/3;
    if(three==a){
        cout<<"YES"<<"\n"<<three<<" "<<one<<" "<<a-(three+one);
        return 0;
    }
    one=(three*3)+3-b;
    three++;
    if(three+one>a)
        cout<<"NO";
    else{
        cout<<"YES"<<"\n"<<three<<" "<<one<<" "<<a-(three+one);
    }    
    return 0;    
}