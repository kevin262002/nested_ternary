#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	if (a<b){
		if (a<c){
			printf("A Is Min");
		}
		else {
			printf("C Is Min");
		}
}
	else{
		if (b<c){
			printf("B Is Min");
		}
		else{
			printf("C Is Min");
		}
}
}
