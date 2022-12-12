#include<stdio.h>

int fact(int a){
	
	if (a>=1){
		
		return a*fact(a-1);
	}
	
	else{
	
	 return 1;
}

}

main(){
	
	int n;
	
	printf("Enter value :- ");
	scanf("%i",&n);
	
	int s = fact(n);
	
	printf("Fact :- %i",s);
	
}
