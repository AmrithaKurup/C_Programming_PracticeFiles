#include <stdio.h>

int main() {
	int a,b,c;
    printf("select your choice\n1 : addition\n2 : subtraction\n3 : multiplication\n4 : division\n");
    scanf("%d",&c);
	switch(c){
		case 1:
			printf("enter 2 numbers");
			scanf("%d%d",&a,&b);
			c = a+b;
			printf("result = %d",c);
		break;
		case 2:
			printf("enter 2 numbers");
			scanf("%d%d",&a,&b);
			c = a-b;
			printf("result = %d",c);
		break;
		case 3:
			printf("enter 2 numbers");
			scanf("%d%d",&a,&b);
			c = a*b;
			printf("result = %d",c);
		break;
		case 4:
			printf("enter 2 numbers");
			scanf("%d%d",&a,&b);
			if(b!=0){
				c = a/b;
				printf("result = %d",c);
			}
			else{
				printf("entered wrong");
			}
		break;
		default:
			printf("entered wrong");
		break;
	}
    return 0;
}