bool helper(char input[],int start, int end){
    if(start>=end){
        return true;
    }
    
    bool smallans = helper(input,start+1,end-1);
    if(smallans==true){
        if(input[start]==input[end]){
            return true;
        }
    }
    return false;
}

bool checkPalindrome(char input[]) {
    int i=0;
    while(input[i]!='\0'){
        i++;
    }
    return helper(input, 0, i-1);
}