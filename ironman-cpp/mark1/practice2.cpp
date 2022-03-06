#include<bits/stdc++.h>
using namespace std;
//wap to compute grade of student eg 91-100 "O grade"
//function using switch
string what_my_grade(int marks){
    marks=marks/10;
    switch(marks){
        case 9:
           return "AA";
        case 8:
            return "ab"; 
        case 7:
            return "bb";
        case 6:
            return "c";
        case 5:
            return "d";
        case 4:
            return "ff" ;                
    }
    return "ff";
}
//function using ladder if-else
/* string what_my_grade(int marks){
    if(marks>=91)
        return "AA"
}*/
int main(){
    int marks;
    cout<<"enter your maeks";
    cin>>marks;
    cout<<"your grade is "<<what_my_grade(marks)<<endl;
    return 0;
}