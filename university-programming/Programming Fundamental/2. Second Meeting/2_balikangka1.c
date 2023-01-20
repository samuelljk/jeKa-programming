#include <stdio.h>
#include <string.h>

int main(){
	char a[10];
	int b;
	scanf("%s", a);
	b = strlen(a);
	for (int i=b-1; i>-1; i--){
		printf("%c", a[i]);
	}
}