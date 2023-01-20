#include <stdio.h>

int main(){
	long long n, a, b, c, d, e, f;
	scanf("%lld", &n);
	if (n % 5 == 0){
		if (n >= 250){
			a = n/250;
			n -= 250 * a;
		}
		if (n >= 100){
			b = n/100;
			n -= 100 * b;
		}
		if (n >= 50){
			c = n/50;
			n -= 50 * c;
		}
		if (n >= 20){
			d = n/20;
			n -= 20 * d;
		}
		if (n >= 10){
			e = n/10;
			n -= 10 * e;
		}
		if (n >= 5){
			f = n/5;
			n -= 5 * f;
		}
		printf("%lld lembar 250 ribuan\n%lld lembar 100 ribuan\n%lld lembar 50 ribuan\n%lld lembar 20 ribuan\n%lld lembar 10 ribuan\n%lld lembar 5 ribuan\n", a, b, c, d, e, f);		
	}else{
	2	printf("Harganya jelek :(");
	}
}