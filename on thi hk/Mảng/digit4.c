 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;

int palindrome(ll n){
    ll tmp = n;
    ll remain;
    ll res = 0;
    ll sum = 0;
    while (n > 0){
        int digit = n % 10;
        if (digit == 4){
            return 0;
        }
        sum += digit;
        res = res * 10 + digit;
        n /= 10;
    }
    return (tmp == res) && (sum % 10 == 0);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    ll end = pow(10, n);
    ll start = end / 10;
    for (ll i = start; i < end; i++){
        if (palindrome(i)){
            printf("%lld ", i);
        }
    }
    printf("\n");
    }
    
}