#include <stdio.h>
unsigned sumDigits(int number){
    int sum=0;
    while(number){
        sum+=number%10;
        number=number/10;
    }
    return sum;
}

unsigned sumArrayDigits(const int* arr, size_t n){
    int sum=0;

    for(int i=0; i<n; i++){
        sum+=sumDigits(*(arr+i));
        // printf("el i: %d ",*(arr+i));
    }
    return sum;
}

int main(){
    // int test;
    // scanf("%d", &test);
    // printf("%d", sumDigits(test));
    int n; 
    //printf("Enter array length ");
    scanf("%d", &n);
    int arr[n];
    // int sum =0;
    printf("Enter numbers for array:\n");
    for(int i=0;i < n; i++){
        scanf("%d", &arr[i]);
    }
    //int n=sizeof(arr)/sizeof(arr[0]);
    printf("size n: %d ", n);
    printf("Sum=%d \n", sumArrayDigits(arr,n));


}