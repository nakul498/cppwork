#include<bits/stdc++.h>
using namespace std;
class student2{
    public:
    
    string name;
    int age;
    student2()
    {
        age=0;
        
    }
    void introduce(){
        cout<<"my name is "<<name<<", I am "<<age<<"years old"<<endl;
    }
}; 
int main(){
    student2* s=new student2();
    s.name="nakul";
    s.age=20;
    s.introduce();
    return 0;
}