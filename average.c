#include <stdio.h>

int main() {
	float a,b,c,avg=0;
    printf("enter 3 numbers");
    scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("average of given numbers : %f" ,avg);

    return 0;
}