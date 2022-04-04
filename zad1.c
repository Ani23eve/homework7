#include <stdio.h>
#include <stdlib.h>

int ifArray(const int* arr, size_t n){
    
        if(n==0){
        return 1;
        }
        if(n<2){
            return 2;
        }
        for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            return 0;
        }
      }
      return 3;
    }






int secondMax(const int* arr, size_t n, int* secondMax){
    int i, max1=*arr;
    int max2=*(arr+1);
    for(int i=2; i<n;i++){

        if(arr[i] > max2){
            if (arr[i] > max1){
            max2=max1;
            max1= arr[i];
    } else {
        max2=arr[i];
    }
}
    }
    *secondMax=max2;
    return *secondMax;
}

int main(){
    int n=13, max2=0, len=0;
    int arr[]={1, 4, 5, 9, -4, 8, 11, 23, 25, 13, 28, 27, 26};
    
    len=sizeof(arr)/sizeof(int);
    int check =ifArray(arr, len);
    if(check==1){
        fprintf(stderr, "Empty array\n");
        
    }
    else if(check==2){
       fprintf(stderr, "Array with one element\n");
    }
    else if(check==3){
        fprintf(stderr, "Array with equals elements");
    }
    else{
        printf("%d\n", secondMax(arr, n, &max2));
    }

    return 0;
}