#include <string>
using namespace std;

string key[] = {"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int keypad(int num, string output[]){
    
    if(num==0 || num==1){
        output[0] = "";
        return 1;
    }
    
    int smallans = keypad(num/10, output);
    
    string str = key[num%10];
    int size = str.length()*smallans;
    
    for(int i=smallans;i<size;++i){
    	output[i] = output[i-smallans];
    }
    
    int k=-1;
    for(int i=0;i<size;++i){
    	if(i%smallans==0){
        	k++;
        }
        output[i] = output[i]+str[k];
    }
    
    return size;
}
