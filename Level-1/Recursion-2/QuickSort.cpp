void swap(int & v1, int &v2){
    int temp = v1;
    v1 = v2;
    v2 = temp;
    return;
}

void crosstransfer(int input[], int count, int size){
    int i=0;
    int j=size-1;
    int pivot = input[count];
    while(i!=count && j!=count){
        if(input[i]<pivot){
            i++;
        }else if(input[j]>=pivot){
            j--;
        }else{
            swap(input[i], input[j]);
            i++;
            j--;
        }
    }
}


void quickSort(int input[], int size) {
    
    if(size==0 || size==1){
        return;
    }
    
    int pivot = input[0];
    int count = 0;
    for(int i=1;i<size;++i){
        if(input[i]<pivot){
            count++;
        }
    }
    input[0] = input[count];
    input[count] = pivot;
    crosstransfer(input,count, size);
    
    quickSort(input, count+1);
    quickSort(input+count+1, size-count-1);
    
}