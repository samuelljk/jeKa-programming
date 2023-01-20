#include <stdio.h>
int main(){
	float a, test2;
	int res, test;
	scanf("%f", &a);
	test = (int)a;
	test2 = (float)test;
	if (test>=-100000 && test<=100000){
		if (a==test2){
			printf("%d %d", test, test);
		}
		else{
			res = (int)a;
			if (res>=0){
				printf("%d %d", res, res+1);
			}
			else if (res<0){
				printf("%d %d", res-1, res);
			}
		}
	}
	
	return 0;
}