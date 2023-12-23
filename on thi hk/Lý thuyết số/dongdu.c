#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

// (A + B) % C = [(A % C) + (B % C)] % C
// (A + B) % C = [(A % C) - (B % C) + B] % C
// (A * B) % C = [(A % C) * (B % C)] % C
// (A ^ B) % C = (A % C)^B % C
// (A / B) % C = (A * B^-1) % C (B^-1 thỏa mãn : (A * B^-1) % C = 1 và gcd(A, C) = 1
// Nếu C là số nguyên tố thì B^-1 = A^(C-2) % C
int x, y, g;
void extended_gcd(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        g = a;
    } else {
        extended_gcd(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

int modular_inverse(int a, int m){
    extended_gcd(a, m);
    return (x % m + m) % m; //Để tránh trường hợp hệ số x < 0
}

int dong_du_tong(int n){
    int a[100];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        res = res + a[i] % 3;
        res %= 3;
    }
}

int dong_du_luy_thua(ll a, ll b, ll c){
    ll res = 1;
    a %= c;
    for (int i = 1; i <= b; i++){
        res *= a;
        res %= c;
    }
    return res;
}
// Xử lí nếu C là số nguyên tố
ll powMod(ll a, ll b, ll c){
    ll res = 1;
    while(b){
        if (b % 2 == 1){
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}
int main(){
    int a, b, m;
    scanf("%d%d%d", &a, &b ,&m);
    printf("%d", a * modular_inverse(b, m) % m);
}