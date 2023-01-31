#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	printf("Enter D : ");
	scanf("%d",&d);
	
	a>b?
		a>c?
			a>d?
				printf("A Is Max")
			
			:
				printf("D Is Max")
		
		:
			c>d?
				printf("C Is Max")
			
			:
				printf("D Is Max")
			
	:
		b>c?
			b>d?
				printf("B Is Max")
			
			:
				printf("D Is Max")
		
		:
			c>d?
				printf("C Is Max")
			
			:
				printf("D Is Max");
}
