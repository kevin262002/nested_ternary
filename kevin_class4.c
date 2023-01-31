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
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A Is Min");
				}
				else{
					printf("E Is Min");
				}
			}
			else{
				printf("D Is Min");
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C Is Min");
				}
				else{
					printf("E Is Min");
				}
			}
			else{
				if(d<e){
					printf("D Is Min");
				}
				else{
					printf("E Is Min");
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("B Is Min");
				}
				else{
					printf("E Is Min");
				}
			}
			else{
				printf("D Is Min");
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C Is Min");
				}
				else{
					printf("E Is Min");
				}
			}
			else{
				if(d<e){
					printf("D Is Min");
				}
				else{
					printf("E Is Min");
				}
			}
		}
	}
}
