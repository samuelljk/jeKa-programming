// NOTES :
// \n (ENTER), %d (integer), &f (float), %c (char), %s (string)
// %[^\n] = sampai ENTER# \n
// stdio.h adalah library (standard input output. header)
// komputer akan mencari dan menjalankan main, makanya perlu | int.main(){}
// ; di akhir 

#include<stdio.h>

int main(){
	
	int angkaBulat;
	float angkaKoma = 1.5f;
	char karakter = 'a';
	char string[100] = "Hello";
	
	printf("Hello World!\nasd\n");
	scanf("%d", &angkaBulat);
	getchar();
	printf("%d\n", angkaBulat);
	
	scanf("%f", &angkaKoma);
	getchar();
	printf("%.1f\n", angkaKoma);
	
	scanf("%c", &karakter);
	getchar();
	printf("%c\n", karakter);
	
	scanf("%[^\n]", string); 
	getchar();
	printf("%s\n", string);
	
	return 0;
}
