#include <stdio.h>

int main() {
	int a,b,temp=0;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("swapped numbers are %d and %d" ,a,b);

    return 0;
}

//Below method is used without temp

int main() {
	int a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("swapped numbers are %d and %d" ,a,b);

    return 0;
}