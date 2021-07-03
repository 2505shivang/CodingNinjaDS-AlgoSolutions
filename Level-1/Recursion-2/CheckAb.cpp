bool check(char input[]){
    if(input[0]=='\0'){
        return true;
    }
    
    if(input[0]=='a'){
        return check(input+1);
    }else{
        if(input[1]=='b' && input[2]!='b'){
            return true;
        }else{
            return false;
        }
    }
}

bool checkAB(char input[]) {
	if(input[0]=='a' && check(input+1)){
        return true;
    }else{
        return false;
    }
}

