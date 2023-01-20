#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

ll invMOD (ll number, ll modulo)
{
    for (ll i=1; i<modulo; i++)
    {
        if (((number % modulo) * (i % modulo)) % modulo == 1)
        {
            return i;
        }
    }
}

int main(){
    ll node, color, count=0, result;
    scanf(" %lld %lld", &node, &color);
    for (ll i=0; i<node; i++){
        ll sum = 1, rest, max = i;
        for (ll j=node; j!=0; j=rest){
            rest = (max%j) % 1000000007;
            max = j;
        }
        for (ll j = 0; j<max; j++){
            sum = (sum*color) % 1000000007;
        }
        count = (count+sum) % 1000000007;
    }
    result = (count*invMOD(node, 1000000007)) % 1000000007;
    printf("%lld", result);
}