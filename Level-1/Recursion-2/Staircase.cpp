int staircase(int n){
   
    if(n==0 || n==1 || n==2){
        return n==0?1:n;
    }
    
    return staircase(n-1)+staircase(n-2)+staircase(n-3);
}