// Change in the given string itself. So no need to return or print anything

void helper(char input[]){
    int len = 0;
    while(input[len]!='\0') len++;
    
    for(int i=len;i>=2;--i){
        input[i+2] = input[i]; 
    }
    
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
    
    return;
}

void replacePi(char input[]) {
	if(input[1]=='\0' || input[0]=='\0'){
        return;
    }
    
    if(input[0]=='p' && input[1]=='i'){
        replacePi(input+2);
        helper(input);
    }else{
        replacePi(input+1);
    }
    return;
}

