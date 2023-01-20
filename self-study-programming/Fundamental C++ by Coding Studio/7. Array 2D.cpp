//#include<stdio.h>
//int main(){
//	
//	int matrix[3][3];
//	int barisPertama = 0;
//	
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 3; j++){
//			scanf("%d", &matrix[i][j]);
//		}
//	}
//	
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 3; j++){
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//	
//	for(int i = 0; i < 3; i++){
//		barisPertama += matrix[0][i];
//	}
//	
//	printf("Hasil output baris pertama : %d", barisPertama);
//	return 0;
//}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	char map[][6] = {"*****", 
					"*****", 
					"*****", 
					"*****", 
					"*****"};
	int playerX = 0, playerY = 0;
	char player = 'P';
	char input;
	
	while(true){
		for(int i = 0; i < 5; i ++){
			for(int j = 0; j < 5; j++){
				if(playerX == j && playerY == i){
					printf("%c", player);
				}
				else
					printf("*");
			}
			printf("\n");
		}
		input=getch();
		// W (atas), A (kiri), S (bawah), D (kanan)
		switch(input){
			case 'w':
				if(playerY > 0) playerY-= 1;
			break;
			case 'a':
				if(playerX > 0) playerX -= 1;
			break;
			case 's':
				if(playerY < 4) playerY += 1;
			break;
			case 'd':
				if(playerX < 4) playerX += 1;
			break;
		}
		system("cls");
	}
	
//	int matrix[5][5];
//	char player = 'X';
//	char star = '*';
//	 
//	for(int i = 0; i < 5; i++){
//		for(int j = 0; j < 5; j++){
//			printf("%c", star, matrix[i][j]);
//			printf("%c", player, matrix[0][1]);
//		}
//		printf("\n");
//	}
	
	return 0;
}
