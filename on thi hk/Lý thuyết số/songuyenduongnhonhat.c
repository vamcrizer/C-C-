#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int gcd(ll a, ll b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    int x, y, z, n;
    scanf("%d%d%d%d", &x, &y, &z, &n);
    int bcnn = lcm(x,lcm(y,z));
    ll num = pow(10, n - 1);
    ll res = (num + bcnn - 1) / bcnn * bcnn;
    if (res < (10, n)){
        printf("%lld", res);
    } else {
        printf("-1");
    }
}