int subsetSumToK(int input[], int n, int output[][50], int k) {
    
	if(n==0 || k==0){
        if(k==0){
            output[0][0] = 0;
            return 1;
        }
        return 0;
    }
    
    if(k<0){
        return 0;
    }
    
    int o1[1000][50], o2[1000][50];
    
    int o1size = subsetSumToK(input+1,n-1,o1,k-input[0]);
    int o2size = subsetSumToK(input+1,n-1,o2,k);
    
    for(int i=0;i<o1size;++i){
        output[i][0] = o1[i][0]+1;
        output[i][1] = input[0];
        for(int j=1;j<=o1[i][0];++j){
            output[i][j+1] = o1[i][j];
        }
    }
    for(int i=o1size;i<o1size+o2size;++i){
        for(int j=0;j<=o2[i-o1size][0];++j){
            output[i][j] = o2[i-o1size][j];
        }
    }
    
    return o1size+o2size;
    
}