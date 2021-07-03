int length(char input[]){
    int len = 0;
    while(input[len]!='\0')len++;
    return len;
}

void pairStar(char input[]) {

    if(input[0]=='\0' || input[1]=='\0'){
        return;
    }
    
    pairStar(input+1);
    
    if(input[0]==input[1]){
        int len = length(input);
        for(int i=len;i>=1;--i){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
    return;
}