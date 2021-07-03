int helper(int n){
    if(n==0){
        return 0;
    }
    
    int smallans = helper(n/10);
    if(n%10==0){
        return smallans+1;
    }else{
        return smallans;
    }
}


int countZeros(int n) {
    if(n==0){
        return 1;
    }else{
        return helper(n);
    }
}


