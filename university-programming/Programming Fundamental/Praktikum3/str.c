#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	char kata[64];
	for (int i=0; i<n; i++){
		char counter[26];
		for (int i=0; i<26; i++){
			counter[i]=0;
		}
		int ascii;
		int illegal = 0;
		scanf("%s", kata);
		for (int j=0; kata[j]!='\0'; j++){
			if (kata[j]<'a' || kata[j]>'z'){
				illegal++;
			}
		}
		if (illegal!=0){
			break;
		}
		for (int j=0; kata[j]!='\0'; j++){
			ascii = (int)kata[j];
			if (counter[ascii-97] == 0){
				counter[ascii-97] = 1;
			}else{
				int temp = counter[ascii-97];
				temp += 1;
				counter[ascii-97] = temp;
			}
		}
		for (int j=0; j<26; j++){
			if (counter[j]==0){
				continue;
			}else if (counter[j]==1){
				printf("%c", (char)j+97);
			}
			else if(counter[j]>1){
				printf("[%d%c]", counter[j], (char)j+97);	
			}
		}
		printf("\n");
	}
}