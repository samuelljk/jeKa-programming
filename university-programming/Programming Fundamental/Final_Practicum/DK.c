#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct kota{
	char name[101];
};

int checker(int n){
	int flag = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (n <= 1)
        flag = 0;
    if (flag == 1) {
    	return 1;
//        printf("%d is a prime number", n);
    }
    else {
    	return 0;
//        printf("%d is not a prime number", n);
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    struct kota kt[n];
    char cek[101];
    int lat[n] , lon[n];
    for (int i=0; i<n; i++){
    	char hN[1], hE[1];
    	scanf(" %s %d%c %d%c", kt[i].name, &lat[i], &hN[0], &lon[i], &hE[0]);
	}
	for (int i=0; i<m; i++){
		scanf(" %s", cek);
		int stat = 0;
		for (int j=0; j<n; j++){
			int status = 0;
			if (strcmp(cek, kt[j].name)==0){
				status += checker(lat[j]);
				status += checker(lon[j]);
				if (status==2){
					printf("%s aman! Bangunlah Kesatria!\n", kt[j].name);
					stat++;
					break;
				}else{
					printf("%s tidak aman! Ini pasti ulah Gorgom!\n", kt[j].name);
					stat++;
					break;
				}
			}
		}
		if (stat==0){
			printf("Tempat apa itu? Kotaro tidak tahu!\n");
		}
	}
//	printf("%s %d %d", kt[0].name, lat[0], lon[0]);

}