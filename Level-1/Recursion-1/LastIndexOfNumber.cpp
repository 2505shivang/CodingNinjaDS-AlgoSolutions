int lastIndex(int input[], int size, int x) {
	if(size==0){
        return -1;
    }
    
    int smallans = lastIndex(input+1, --size, x);
    if(smallans==-1){
        if(input[0]==x){
            return 0;
        }else{
            return -1;
        }
    }else{
        return smallans+1;
    }
}
