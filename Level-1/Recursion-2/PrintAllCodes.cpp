#include <string.h>
using namespace std;

void print(string input,string ans){
    if(input.size()==0){
        cout<<ans<<endl;
        return;
    }
    
    int num = input[0]-'0';
    print(input.substr(1), ans+(char)('a'+num-1));
    if(input.size()>1){
        if(input.substr(0,2)<="26"){
        	num = num*10 + input[1]-'0';
        	print(input.substr(2),ans+(char)('a'+num-1));
        }
    }
}

void printAllPossibleCodes(string input) {
    print(input , "");
}