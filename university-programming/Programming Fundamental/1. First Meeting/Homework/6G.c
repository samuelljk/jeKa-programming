#include <stdio.h>

int main(){
	int a, b, least=0, most=0;
	scanf("%d", &a);
	if (a>=1 && a<=100){
		for (int i=0; i<a; i++){
			scanf("%d", &b);
			if (least==0 && most==0){
				least = b;
				most = b;
			}
			else if (least>b && b<most){
				least = b;
			}
			else if (most<b && b>least){
				most = b;
			}
		}
		printf("%d %d", most, least);
	}
}