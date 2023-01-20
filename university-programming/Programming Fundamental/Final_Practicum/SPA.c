#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

void solution(ll start, ll num, ll idx){
	ll arr[15];
//	int legal = 0;
	for (int i=0; i<15; i++){
		if (i==0){
			arr[i] = start;
		}
		else if (i==1 || i==4){
			arr[i] = arr[i-1]-6;
		}
		else if (i==2 || i==5){
			arr[i] = arr[i-1]+9;
		}
		else if (i==3 || i==6){
			arr[i] = arr[i-1]+6;
		}
		else if (i==7){
			arr[i] = arr[i-1]+3;
		}
		else if (i==8 || i==11 || i==14){
			arr[i] = arr[i-1];
		}
		else if (i==9){
			arr[i] = arr[i-1]+6;
		}
		else if (i==10){
			arr[i] = arr[i-1]+3;
		}
		else if (i==12){
			arr[i] = arr[i-1]+16;
		}
		else if (i==13){
			arr[i] = arr[i-1]-6;
		}
	}
	for (int i=0; i<15; i++){
		if (arr[i]==num){
			printf("%lld ", i+idx);
//			legal++;
		}
	}
//	if (legal==0){
//		printf("%d", -1);
//	}
//	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	while (n--){
		ll num, start_loc, loc, index_loc;
		scanf(" %lld", &num);
		if (num<63){
			switch (num){
				case 6:
					printf("%d\n", 1);
					break;
				case 9:
					printf("%d\n", 2);
					break;
				case 18:
					printf("%d %d\n", 3, 5);
					break;
				case 15:
					printf("%d\n", 4);
					break;
				case 24:
					printf("%d\n", 7);
					break;
				case 27:
					printf("%d\n", 6);
					break;
				case 33:
					printf("%d\n", 10);
					break;
				case 36:
					printf("%d %d\n", 8, 9);
					break;
				case 45:
					printf("%d %d\n", 11, 12);
					break;
				case 54:
					printf("%d %d\n", 14, 15);
					break;
				case 60:
					printf("%d\n", 13);
					break;
			}
		}
//		printf("%d\n", num%54);
		else if (num%54==0){
			loc = (num/54)-1;
			index_loc = 16+(15*(loc-1));
//			printf("%d\n", loc);
			start_loc = 69+(54*(loc-1));
//			printf("%d\n", start_loc);
			solution(start_loc, num, index_loc);
		}
		else if (num%54==6){
			loc = (num/54)-1;
			index_loc = 16+(15*(loc-1));
//			printf("%d\n", loc);
			start_loc = 69+(54*(loc-1));
//			printf("%d\n", start_loc);
			solution(start_loc, num, index_loc);
		}
		else if 
		(
		num%54==15 || num%54==9 ||
		num%54==18 || num%54==24 ||
		num%54==27 || num%54==33 ||
		num%54==36 || num%54==42 || num%54==45
		){
			loc = num/54;
			index_loc = 16+(15*(loc-1));
//			printf("%d\n", loc);
			start_loc = 69+(54*(loc-1));
//			printf("%d\n", start_loc);
			solution(start_loc, num, index_loc);
		}
		else{
			printf("%d\n", -1);
		}
	}
}