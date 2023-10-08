// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int arr1[20][20],arr2[20][20],res[20][20];
    int size,i,j;
    
    printf("Enter the size of arrays\n");
    scanf("%d",&size);
    
    printf("Enter the values of array 1\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the values of array 2\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    res = arr1 + arr2;
    printf("Sum of 2 arrays is:\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}