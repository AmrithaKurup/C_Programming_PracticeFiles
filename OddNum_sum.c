#include <stdio.h>

int main() {
    int i,a,c=0;
    printf("Enter a limit");
    scanf("%d",&a);
	for(i=1;i<=a;i=i+2)
	{
	printf("%d\t",i);
	c=c+i;
	}
	printf("\nSum of odd numbers = %d",c);
    return 0;
}