// Online C compiler to run C program online
#include <stdio.h>

int *getArray(int *arr,int size);
int displayArray(int *arr,int size);
int main() {
    int *ptr;
    int arr[20],size;
    printf("enter the size of an array\n");
    scanf("%d",&size);
    ptr=getArray(arr,size);
    displayArray(arr,size);
    return 0;
}

int *getArray(int *arr,int size){
    printf("enter the values of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

int displayArray(int *arr,int size){
    printf("the values of the array are:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}


