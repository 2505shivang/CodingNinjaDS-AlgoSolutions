
int subset(int input[], int n, int output[][20]) {
    // Write your code here
	if(n==0){
        output[0][0] = 0;
        return 1;
    }
    
    int smallans = subset(input+1, n-1, output);
    int size = smallans*2;
    for(int i = smallans;i<size;++i){
        output[i][0]=output[i-smallans][0]+1;
        output[i][1] = input[0];
        for(int j=1;j<=output[i-smallans][0];++j){
            output[i][j+1]=output[i-smallans][j];
        }
    }
    
    return size;
}
