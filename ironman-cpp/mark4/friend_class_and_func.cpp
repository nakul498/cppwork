#include<bits/stdc++.h>
using namespace std;
/*class Citizen{
    string aadhaar;
    int atm_balance;
    int age;

    public:
    string name;
    Citizen(string n, string ad, int a, int ab){
        name = n; 
        age = a; 
        atm_balance = ab;
        aadhaar = ad;
    
    }
    void introduce(){
        cout<<"Hi, my name is "<<name<<",I am "<<age<<"year old"<<endl;
    }
};
int main(){
    Citizen *c=new Citizen("Sushant","212332",19,45000000);
    c->introduce();
    return 0;       
}
here in this program protected data member can only be accessed by same class
but if we now want it to be accessed by other classes or functions too we use friend class/ function
*/
class Citizen{
    string aadhaar;
    int atm_balance;
    int age;

    public:
    string name;
    Citizen(string n, string ad, int a, int ab){
        name = n; 
        age = a; 
        atm_balance = ab;
        aadhaar = ad;
    
    }
    void introduce(){
        cout<<"Hi, my name is "<<name<<",I am "<<age<<"year old"<<endl;
    }
    friend class Government;
    friend void hackerman(Citizen *c);
};
 void hackerman(Citizen* c){
        cout<<"hacked details: "<<endl;
        cout<<"Name: "<<c->name<<endl;
        cout<<"age: "<<c->age <<endl;
        cout<<"Aadhaar: "<<c->aadhaar<<endl;
        cout<<"Balance: "<<c->atm_balance<<endl;
    }
   //here this friend function can access the private data members of citizen class 
class Government{
    public:
    void tax_raid(Citizen* c){
        cout<<"tax raid details: "<<endl;
        cout<<"Name: "<<c->name<<endl;
        cout<<"age: "<<c->age <<endl;
        cout<<"Aadhaar: "<<c->aadhaar<<endl;
        cout<<"Balance: "<<c->atm_balance<<endl;
    }
};
int main(){
    Citizen *c=new Citizen("Sushant","212332",19,45000000);
    c->introduce();
    Government g;
    g.tax_raid(c);
    cout<<endl;
    hackerman(c);
    return 0;    
}
//here with out using friend function we can only access public data members