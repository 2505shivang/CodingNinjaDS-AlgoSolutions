
void printSubsetSumToK(int input[], int size, int k, int output[], int osize){
    
    
    if(size==0){
        if(k==0){
            for(int i=0;i<osize;++i){
                cout<<output[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    
    printSubsetSumToK(input+1,size-1,k,output,osize);
    output[osize] = input[0];
    printSubsetSumToK(input+1,size-1,k-input[0],output,osize+1);    
}



void printSubsetSumToK(int input[], int size, int k) {
    
    int *output = new int[size];
    printSubsetSumToK(input, size, k,output,0);
    
}