#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    char gender;

    Student(){
        cout<<"default cons called"<<endl;
    }
    //constructor always has to be public
    Student (string name, int age, char gender){
        this->name = name;
        //this pointer is used to point the current object i.e class veriables of that object
        this->age = age;
        this->gender 

    }
    
};
//constructor has to be always public
int main(){
    Student *s=new Student();
    return 0;
}