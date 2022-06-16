#include<bits/stdc++.h>
using namespace std;
class GoodStudent{
    public:
    string name;
    int age; 
    int marks;
   /* GoodStudent(string name, int age, int marks){
        this -> name = name;
        this -> age = age;
        this -> marks= marks;
    }*/
    //the task that above code is doing is same as below
    GoodStudent(string name, int age, int marks):
    name(name),
    age(age),
    marks(marks)
    {}
    /*
     GoodStudent(string n, int a, int m):
    name(n),
    age(a),
    marks(m)
    {}
    */
    void introduce(){
        cout<<"Name: "<< name<<end;
        cout<<"Age: "<< age<<end;
        cout<<"marks: "<< marks<<end;
    }
};
int main(){

}