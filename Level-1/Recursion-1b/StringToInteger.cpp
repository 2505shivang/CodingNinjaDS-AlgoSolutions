int helper(char input[], int len){
    if(len==0){
        return 0;
    }
    
    int smallans = helper(input, len-1);
    
    return (smallans*10)+(input[len-1]-'0');
}

int stringToNumber(char input[]) {
    
    int len = 0;
    while(input[len]!='\0') len++;
    
    return helper(input,len);
}

