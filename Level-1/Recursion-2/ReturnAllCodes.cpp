#include <string.h>
using namespace std;

int tonum(string s){
    int num = 0;
    for(int i=0;i<s.length();i++){
        num = (num*10) + (s[i]-'0');
    }
    return num;
}

char tochar(string s){
    int num = tonum(s);
    char ch = 'a'+(num-1);
    return ch;
}

int getCodes(string input, string output[10000]) {
	string o1[10000], o2[10000];
	if(input.length()==0){
        output[0]="";
        return 1;
    }
    
    int smallans = getCodes(input.substr(1), o1);
    int op2 = 0;
    if(input.length()>1 && tonum(input.substr(0,2))<=26){
        op2 = getCodes(input.substr(2),o2);
    }
    
    for(int i=0;i<smallans;i++){
        output[i] = tochar(input.substr(0,1))+o1[i];
    }
    
    for(int i=smallans;i<op2+smallans;i++){
        output[i] = tochar(input.substr(0,2))+o2[i-smallans];
    }
    
    return op2+smallans;
    
}
