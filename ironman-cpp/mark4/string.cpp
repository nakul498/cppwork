#include<bits/stdc++.h>
using namespace std;
int main(){
    string fname="nakul";
    string lname;
 //   cin>>lname;// it will take only one string and not read anything after " " space.
    getline(cin,lname);
    cout<<fname+" "+lname<<endl;
    return 0;
}
/*"hello" - it is not string, it is const char*
cout<<"hello"+"world"; // gives error
+ -> opertator is use to join to strings.
*/