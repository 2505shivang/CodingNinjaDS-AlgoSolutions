double helper(int k, int i){
    if(k==0){
        return 1.0/i;
    }
    
    double smallans = helper(k-1,i*2);
    return smallans+(1.0/i);
}

double geometricSum(int k) {
    int i=1;
    return helper(k,i);
}


