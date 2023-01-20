#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

ll pangkat(ll n, ll x){
	if (x==0){
		return 1;
	}
	else if (x==1){
		return n;
	}else{
		return n*pangkat(n, x-1);
	}
}

int main(){
	int T, day;
	scanf("%d", &T);
	day = T;
	ll A, B, N, M, result;
	for (int i=0; i<T; i++){
		ll total=0;
		scanf(" %lld %lld %lld %lld", &A, &B, &N, &M);
//		printf("#\n");
		for (ll j=0; j<N; j++){
			total += ((pangkat(A, j))*(pangkat(j, B)));
//			printf("%lld\n", total);
		}
		total %= M;
		printf("%lld\n", total);
//		result = total/day;
//		printf("%lld\n", result);
	}
}
	