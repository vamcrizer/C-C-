#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;


ll gcd(ll a, ll b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int main(){
    int m,n;
}