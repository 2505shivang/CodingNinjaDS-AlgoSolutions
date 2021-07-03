int sumOfDigits(int n) {
    if(n==0){
        return 0;
    }
    
    int smallans = sumOfDigits(n/10);
    
    return smallans+n%10;
}
