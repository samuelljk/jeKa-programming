#include <cstdio>
int main(){
	int a, res;
	res = 0;
	scanf("%d", &a);
	for (int i=0; i<a; i++){
		int b;
		scanf("%d", &b);
		res += b;
	}
	printf("%d", res);
}