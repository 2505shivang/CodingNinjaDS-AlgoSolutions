#include <iostream>
#include <string>
using namespace std;

string array[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void printKeypad(int num, string output){
    if(num==0 || num==1){
        cout<<output<<endl;
    }
    
    int lastdigit = num%10;
    for(int i=0;i<array[lastdigit].size();++i){
        printKeypad(num/10, array[lastdigit][i]+output);
    }
    return;
}

void printKeypad(int num){
    
    printKeypad(num, "");
    return;
}
