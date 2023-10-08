#include <stdio.h>

int sum(int,int);
int main() {
    int n1,n2,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
	c = sum(n1,n2);
    printf("Sum is %d",c);

    return 0;
}
int sum(int n1,int n2){
	int sum;
	sum = n1 + n2;
	return sum;
}