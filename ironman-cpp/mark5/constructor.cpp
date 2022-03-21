#include <iostream>
using namespace std;
class parent
{
public:
    virtual void p()
    {
         cout << "parent" << endl; 
    }
};
class child : public parent
{
public:
     void p()
    {
        cout << "child" << endl;
    }
};

int main()
{
    parent *pt,op;
    child oc;
    pt=&op;
    pt->p();
    pt=&oc;
    pt->p();
    oc
}