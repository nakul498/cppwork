#include<bits/stdc++.h>
using namespace std;

class Planet{
    public:
    string name;
    int year_time;
    Planet(){
        cout<<"cons called"<<endl;
    }
    ~Planet(){
        cout<<"des called"<<endl;
    }
    //~ sign is used to define a constructer
    void introduce(){
        cout<<"Hi, I Am "<< name<<endl;
    }
};
void science_committee(){
    cout<<"in committee"<<endl;
    Planet p;
    p.name="Pluto";
    p.year_time=200;  
    p.introduce();
    cout<<"meeting over"<<endl;
}
int main(){
    science_committee();
    cout<<"in the main again"<<endl;
    return 0;
}
/*
destructor will never take arguments because we are not controlling the destructions
their can not be more than one destructor but practically thier can be two one private and one public
*/
