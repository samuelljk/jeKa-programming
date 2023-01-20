#include <stdio.h>
int main(){
	
	//SELECTION
	/*
		1. If, else if, else
		2. Switch case
		3. Ternary if
	*/
	
//	int angka = 0;
	
	// 1. Kalau angka 0 maka print "nol", kalau ganjil print "ganjil", kalau genap print "genap"
//	if(angka == 0){
//		printf("nol");
//	} 
//	else if(angka%2 == 1){
//		printf("ganjil");
//	}
//	else{
//		printf("genap");
//	}
	
	// 2.
//	int angka = 7;
//	
//	switch(angka){
//		case 0:
//			printf("nol");
//			break;
//		case 1: // angka == 1
//			printf("satu");
//			break;
//		case 5: // angka == 5
//			printf("lima");
//			break;
//		default:
//			printf("Selain nol, satu, dan lima");
//	}
	
	// 3.
	
	// kondisi ? benar : salah
//	int angka = 5;
//	printf("%s", (angka<2 ? "lebih kecil dari 2" : 
//					angka > 2? "lebih besar dari 2" : "2"));
	

	int angka;
	int batasbawah;
	int batasatas;
	scanf("%d", &angka);
	scanf("%d %d", &batasbawah, &batasatas);
	
	
	if(angka >= batasbawah && angka <= batasatas){ //pakai && (AND AND)
		printf("%d diantara %d dan %d", angka, batasbawah, batasatas);
	}
	else{ //else boleh tidak pakai kurung jika hanya 1 baris
		printf("%d tidak diantara %d dan %d", angka, batasbawah, batasatas);
	}
		
	return 0;
}

