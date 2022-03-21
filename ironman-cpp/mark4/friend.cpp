#include<bits/stdc++.h>
using namespace std;
class complexo{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<" +"<<b<<"i";
        }
        //below line means that sumComlexo function is allowed to do anything with my private part of class
        friend complexo sumComplexo(complexo o1, complexo o2);
};
complexo sumComplexo(complexo o1, complexo o2){
    complexo o3;
    o3.setNumber((o1.a+o2.a),(o1.b,o2.b));
    return o3;
}
int main(){
    complexo c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(5,8);
    c2.printNumber();
    sum=sumComplexo(c1,c2);
    sum.printNumber();
    return 0;
}
/* Properties of friend function
1.not in scope of class
2.since it is not in the scope of the class, it cannot be called from the object of that class, c1.sumComplexo()==invalid
3. can be invoked without the help of  any object 
4 usually contains the objects as argument
5 can be declared inside public or private section of the class
6 it cannot access the members directly by their names and need object_name.member_name to access any member
*/