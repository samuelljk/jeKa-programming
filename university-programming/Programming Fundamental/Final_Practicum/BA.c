#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
	int n, m;
	scanf("%d", &n); ll arr[n];
	for (int i=0; i<n; i++) scanf(" %lld", &arr[i]);
	scanf(" %d", &m);
	while (m--){
		int x; ll numb; char cmd[5]; scanf(" %d", &x);
		switch (x){
			case 2:
				for (int i = 0; i < n; i++) printf("%lld ", arr[i]);
				printf("\n");
				break;
			case 1:
				scanf(" %s %lld", cmd, &numb);
				for (int i=0; i<n; i++){
					int temp2 = (int)cmd[0];
					ll *temp = &arr[i];
					switch (temp2){
						case 88:
							*temp ^= numb;
							break;
						case 65:
							*temp &= numb;
							break;
						case 79:
							*temp |= numb;
							break;
					}
				}
		}
	}
}