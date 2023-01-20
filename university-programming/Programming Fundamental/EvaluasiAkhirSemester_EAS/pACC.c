//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| X | 0 | X | ~~ Name: Samuel Josefano Kaloh			 ~~ | 0 | X | 0 |
//	 --- --- ---  ~~ NRP: 5025221065						 ~~  --- --- ---
//	| 0 | X | 0 | ~~ Event: Fundamental Programming (ETS)	 ~~ | X | 0 | X |
//	 --- --- ---  ~~ Date & Time: Wednesday, 7 December 2022 ~~  --- --- ---
//	| X | 0 | X | ~~ Problem: prob_ACC					     ~~ | 0 | X | 0 |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

void solution(ll x, ll count){
	if (x==1){
		printf("result: %lld\n", count);
	}else if (x%2==0){
		x = (x/2);
		count++;
		solution(x, count);
	}else if (x%2!=0){
		x = ((3*x)+1);
		count++;
		solution(x, count);
	}
}

int main(){
	ll n, x;
	scanf("%lld", &n);
	while (n--){
		scanf(" %lld", &x);
		solution(x, 0);
	}
}