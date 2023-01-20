//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//void bin(long long x, long long power){ // 52, 5
//	if (power<0){
//		
//	}else{
//		if (x-pow(2, power)>=0){
//			printf("%lld", 1); // 1
//			x -= pow(2, power); // 20
//			power--;
//		}else{
//			printf("%lld", 0);
//			power--;
//		}
//		bin(x, power);	
//	}
//}
//
//int main(){
//	long long n;
//	scanf("%lld", &n);
//	long long pangkat = 0; 
//	while (pow(2, pangkat)<n){
//		pangkat++;
//	}
//	bin(n, pangkat-1);
//}