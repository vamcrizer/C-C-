#include <stdio.h>
typedef long long ll;

ll gcd(ll a, ll b){
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
    int t;
    scanf("%d", &t);
    while(t--){
    ll a,b;
    scanf("%lld%lld", &a, &b);
    printf("%lld %lld\n", gcd(a,b), lcm(a,b));
    }
}