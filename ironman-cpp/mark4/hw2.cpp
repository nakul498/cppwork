#include<bits/stdc++.h>
using namespace std;
class sum{
    int sum;
    public:
        int cal(){
            for(int i=1;i<10;i+=2){
                sum=sum+i;
            }
            return sum;
        }
        int display(){
            cout<<"sum fo odd numbers is"<<cal();
            return 0;
        }
};
int main(){
    sum* s=new sum();
    s->display();
    return 0;
}