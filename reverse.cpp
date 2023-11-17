#include<bits/stdc++.h>

using namespace std;


void rever(string &str){

   stack<char>s;

   for( auto c: str){
    s.push(c);
   }

   for(int i =0; i<str.length(); i++){

     str[i] = s.top();
     s.pop();
   }

}


int main(){

    string input = "I am king";
    
    rever(input);

    cout << "Reversed string is " <<input;


}