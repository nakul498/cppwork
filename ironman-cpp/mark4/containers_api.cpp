#include<bits/stdc++.h>
using namespace std;
void display(string &str){
    for(char c:str){
        cout<<c<<endl;
    }

}
int main(){
    string movie="krish";
   /*cd  for(int i=0;i<movie.size();i++){
        cout<<movie[i]<<endl;
    }*/
    //to know size of string their is function str.len();complextiy - O(n);
    //in api their is another function apiconatiner.size() which store size.
    //.lenght() is limited to string , .size() work for all conatiners
    //  itrate over container we can also use for each given below
    display(movie);
    movie.push_back(' ');
    movie.push_back('2');
    movie.pop_back();
    display(movie);
    return 0;
}
//use cplusplus website read itrators container from their
