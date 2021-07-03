int firstIndex(int input[], int size, int x) {
	if(size==0){
        return -1;
    }
    
    if(input[0]==x){
        return 0;
    }
    
    int smallans = firstIndex(input+1,--size,x);
    
    return smallans==-1?-1: smallans+1;
}
