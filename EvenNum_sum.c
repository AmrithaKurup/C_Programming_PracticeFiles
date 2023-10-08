#include <stdio.h>


int main() {
    int i,a,sum=0;
    printf("Enter a limit");
    scanf("%d",&a);
	for(i=2;i<=a;i++){
		if((i%2)==0){
		printf("%d\t",i);
		sum = sum + i;
		}
	}
	printf("sum = %d\t",sum);
    return 0;
}