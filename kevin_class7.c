#include<stdio.h>

main(){
	
	int a,b,c,d,e;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	printf("Enter D : ");
	scanf("%d",&d);
	
	printf("Enter E : ");
	scanf("%d",&e);
	
	a>b?
		a>c?
			a>d?
				a>e?
					printf("A Is Max")
				
				:
					printf("E Is Max")
			
			:
				printf("D Is Max")
			
		:
			c>d?
				c>e?
					printf("C Is Max")
				
				:
					printf("E Is Max")
		
			:
				d>e?
					printf("D Is Max")
				
				:
					printf("E Is Max")
				
	:
		b>c?
			b>d?
				b>e?
					printf("B Is Max")
				
				:
					printf("E Is Max")
				
			:
				printf("D Is Max")
			
		:
			c>d?
				c>e?
					printf("C Is Max")
				
				:
					printf("E Is Max")
				
			:
				d>e?
					printf("D Is Max")
				
				:
					printf("E Is Max");
				
}
