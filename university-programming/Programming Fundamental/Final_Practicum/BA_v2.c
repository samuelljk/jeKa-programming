#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;



char str_int(char a[], int x, ll numb){
	const char s[4] = " ";
    char* tok;
    tok = strtok(a, s);
    char result[]="";
    while (tok != 0) {
    	ll tempo;
    	char str[100001];
        printf("%s, ", tok); //dapat angka
        sprintf(tempo, "%c", tok);
        ll temp=tok;
		switch (x){
			case 88:
				temp ^= numb;
				break;
			case 65:
				temp &= numb;
				break;
			case 79:
				temp |= numb;
				break;
		}
		sprintf(str, "%lld", temp);
		strncat(result, str, strlen(str));
		strncat(result, " ", 1);
        // Use of strtok
        // go through other tokens
        tok = strtok(0, s);
    }
    return result;
    
}

int main(){
	int n;
	scanf("%d", &n);
	char arr[n];
	scanf(" %s", arr);
	int m;
	scanf(" %d", &m);
	while (m--){
		int x;
		ll numb;
		char cmd[5];
		scanf(" %d", &x);
		switch (x){
			case 2:
				printf("%s", arr);
				break;
			case 1:
				scanf(" %s %lld", cmd, &numb);
				strcpy(arr, "");
				strcpy(arr, str_int(arr, (int)cmd[0], numb));
//				arr = str_int(arr, (int)cmd[0], numb);
		}
	}
}