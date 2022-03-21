#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int age;
    string name;
    student(string n, int a){
        name =n;
        age =a;
    }
    void introduce(){
        cout<<"my name is "<<name<<", I am "<<age<<"years old"<<endl;
    }
};

int main(){
    student* s=new student("nakul",20);
    s->introduce();
    (*s).introduce();
    (*s).name="rohit";
    return 0;
}