#include<stdio.h>
int main(){
	// Repetition / Looping
	// For, while, do while
	// break, continue
	
//	for(int i = 1; i <=  10; i+=2){
//		if(i == 5) continue;
//		
//		printf("%d\n", i);
//	}
	
//	printf("While :\n");
//	int j = 1;
//	while(j <= 10){
//		printf("%d\n", j++);
//	}
//	
//	printf("Do While :\n");
//	int k = 1;
//	do{
//		printf("%d\n", k++);
//	}while(k <= 10);

	// nested loop
//	int size;
//	scanf("%d", &size);
//	for(int i = 0; i<size; i++){
//		for(int j = 0; j<size; j++){
//			if(i == 0 || i == size-1 || j == 0 || j == size-1){
//				printf("*");
//			}
//			else{
//			printf(" ");
//			}
//		}
//	
//		printf("\n");
//	}


//	BUAT SEGITIGA
	for(int b=1; b<=5; b++){
		for(int c=1; c<=b; c++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
