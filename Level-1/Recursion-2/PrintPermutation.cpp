#include <iostream>
#include <string>
using namespace std;

void print(string input, string out){
    
    if(input.size()==0){
        cout<<out<<endl;
        return;
    }
    for(int i=0;i<input.size();++i){
        print(input.substr(0,i)+input.substr(i+1), out+input[i]);
    }
}


void printPermutations(string input){
    
    print(input, "");
    
}