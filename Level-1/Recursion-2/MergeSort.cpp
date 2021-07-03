
void merge(int *arr1, int size1, int *arr2, int size2){
    
    int *output = new int [size1+size2];
    
    int i=0,j=0;
    int osize = 0;
    while(i<size1 && j<size2){
        if(arr1[i]>arr2[j]){
            output[osize] = arr2[j];
            j++;
        }else{
            output[osize] = arr1[i];
            i++;
        }
        osize++;
    }
    
    while(i<size1){
        output[osize] = arr1[i];
        i++;
        osize++;
    }
    
    while(j<size2){
        output[osize] = arr2[j];
        j++;
        osize++;
    }
    
    for(int i=0;i<osize;++i){
        arr1[i] = output[i];
    }
    
}

void mergeSort(int input[], int size){
	if(size<=1){
        return; 
    }
    
    int mid = (size+1)/2;
    
    mergeSort(input,mid);
    mergeSort(input+mid,size-mid);
    merge(input,mid, input+mid, size-mid);
    return;
}