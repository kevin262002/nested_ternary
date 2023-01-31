#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	a>b?
		a>c?
			printf("A Is Max")
		
		:
			printf("C Is Max")
		

	:
		b>c?
			printf("B Is Max")
		
		:
			printf("C Is Max");
			
		

}
