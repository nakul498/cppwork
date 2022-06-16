#include<bits/stdc++.h>
using namespace std;
int main(){
  /*  stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
     cout<<s.top()<<endl;
     s.pop();   
    }
  //  return 0;
  * /
  stack<vector<int>> s;
  s.push({1,2,3});
  s.push({3,4});
  s.push({5,1});
  while(!s.empty()){
      vector<int> a=s.top();
      for(int ele :a){
         cout<<ele<<" "; 
      }
      s.pop();
      cout<<endl;
  }
}
//stack of vector