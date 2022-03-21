#include<bits/stdc++.h>
using namespace std;
class complexo;
class calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(complex , complexo )
};
class complexo{
    int a,b;
    friend int calculator :: sumRealComplex(complexo o1,complexo o2);
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<" +"<<b<<"i";
        }      
};
int sumRealComplex(complex o1, complexo o2){ 
   return  o1.a+o2.a;
}

int main(){
    complexo o1,o2,sum;
    o1.setNumber(1,4);
    o2.setNumber(5,8);
    calculator calc;
    int res= calc.sumRealComplex(o1, o2);
    cout<<"the sum of real part of o1 and o2 is"<<res<<endl;
    return 0;
}
