#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   
    if(input.size()==0){
        output[0] = "";
        return 1;
    }
    int sum=0;
    for(int i=0;i<input.size();++i){
        string o1[10000];
        int ans = returnPermutations(input.substr(0,i)+input.substr(i+1),o1);
        for(int j=0;j<ans;j++){
            output[sum] = input[i]+o1[j];
            sum++;
        }
    }
    return sum;
}
