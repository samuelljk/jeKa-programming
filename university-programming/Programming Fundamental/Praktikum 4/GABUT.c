#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	char kalimat[100];
	scanf("%[^\n]", kalimat);
	int vowel=0, cons=0, upper=0, small=0;
	for (int i=0; i<strlen(kalimat); i++){
		if (
		kalimat[i]>='a' && kalimat[i]<='z' && kalimat[i]=='a'
		){
			small++;
			vowel++;
		}
		else if (
		kalimat[i]>='a' && kalimat[i]<='z' && kalimat[i]=='i'
		){
			small++;
			vowel++;
		}
		else if (
		kalimat[i]>='a' && kalimat[i]<='z' && kalimat[i]=='u'
		){
			small++;
			vowel++;
		}
		else if (
		kalimat[i]>='a' && kalimat[i]<='z' && kalimat[i]=='e'
		){
			small++;
			vowel++;
		}
		else if (
		kalimat[i]>='a' && kalimat[i]<='z' && kalimat[i]=='o'
		){
			small++;
			vowel++;
		}
		else if (
		kalimat[i]>='a' && kalimat[i]<='z'
		){
			small++;
			cons++;
		}
		else if (
		kalimat[i]>='A' && kalimat[i]<='Z' && kalimat[i]=='A'
		){
			upper++;
			vowel++;
		}
		else if (
		kalimat[i]>='A' && kalimat[i]<='Z' && kalimat[i]=='I'
		){
			upper++;
			vowel++;
		}
		else if (
		kalimat[i]>='A' && kalimat[i]<='Z' && kalimat[i]=='U'
		){
			upper++;
			vowel++;
		}
		else if (
		kalimat[i]>='A' && kalimat[i]<='Z' && kalimat[i]=='E'
		){
			upper++;
			vowel++;
		}
		else if (
		kalimat[i]>='A' && kalimat[i]<='Z' && kalimat[i]=='O'
		){
			upper++;
			vowel++;
		}
		else if (
		kalimat[i]>='A' && kalimat[i]<='Z'
		){
			upper++;
			cons++;
		}
	}
	printf("Vowel Number: %d\n", vowel);
	printf("Number of Consonants: %d\n", cons);
	printf("Total Uppercase: %d\n", upper);
	printf("Total Smallcase: %d", small);
}