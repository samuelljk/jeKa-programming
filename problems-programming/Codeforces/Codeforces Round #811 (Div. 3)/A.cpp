#include <cstdio>
#include <string>

int t, n, H, M, lastH, lastM, resH, resM, hi, mi, i, j;

int main(){
	scanf("%d", &t);
	for (i=0;i<=t;i++){
		scanf("%d %d %d", &n, &H, &M);
		for (j=0;j<=n;j++){
			scanf("%d %d", &hi, &mi);
			if (hi == H && mi == M){
				lastH = hi;
				lastM = mi;
				resH = 0;
				resM = 0;
			}
			else if (hi <= lastH && lastH != 0){
				lastH = hi;
				lastM = mi;
				if (lastM >= 0){
					resH = 24 - H + lastH;
				}
				else if (lastH > H){
					resH = lastH - H - 1;
				}
				if (lastM > 0){
					resH--;
					resM += lastM;
				}
			}else if (lastH == 0){
				lastH = hi;
				lastM = mi;
				if (lastM >= 0){
					resH = 24 - H + lastH;
				}
				else if (lastH > H){
					resH = lastH - H - 1;
				}
				if (lastM > 0){
					resH--;
					resM += lastM;
				}
			}
		}
	printf("%d %d\n", resH, resM);
	printf("1");
	}
	return 0;
}