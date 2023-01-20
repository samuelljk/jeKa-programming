#include <stdio.h>
#include <string.h>

int main(){
	char ivan[4] = "IVAN";
	int a, countI, countV, countA, countN, res;
	scanf("%d", &a);
	char input[a];
	scanf("%s", &input);
	for (int i=0; i<a; i++){
		if (input[i]==ivan[0] && countV==0 && countA==0 && countN==0){
			countI++;
		}
		else if (input[i]==ivan[1] && countA==0 && countN==0){
			countV++;
		}
		else if (input[i]==ivan[2] && countN==0){
			countA++;
		}
		else if (input[i]==ivan[3] && countI>0 && countV>0 && countA>0){
			countN++;
			res++;
			countI = 0;
			countV = 0;
			countA = 0;
			countN = 0;
		}
	}
	printf("%d", res);
}

//int main(){
//	char ivan[4] = "IVAN";
//	int a, countI, countV, countA, countN, res;
//	scanf("%d", &a);
//	char input[a];
//	scanf("%s", &input);
//	for (int i=0; i<a; i++){
//		if (input[i]==ivan[0]){
//			countI++;
//		}
//		else if (input[i]==ivan[1]){
//			countV++;
//		}
//		else if (input[i]==ivan[2]){
//			countA++;
//		}
//		else if (input[i]==ivan[3]){
//			countN++;
//		}
//	}
//	while (countI>0 && countV>0 && countA>0 && countN>0){
//		res++;
//		countI--;
//		countV--;
//		countA--;
//		countN--;
//	}
//	printf("%d", res);
//}