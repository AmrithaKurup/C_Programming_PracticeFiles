#include <stdio.h>

int main() {
    int a,b,sum,sub,mul,div;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("you have entered %d\tand\t%d\n",a,b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
    printf("sum=%d\tsub=%d\tmul=%d\t",sum,sub,mul);
	if(b!=0){
		div=a/b;
	printf("div=%d\t",div);
	}
	else
	printf("invalid");

    return 0;
}