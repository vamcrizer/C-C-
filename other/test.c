#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define maxn 100000
typedef long long ll;


int a[maxn + 1];
int asc_cmp(const void *a, const void *b){
  return *(int*)b - *(int*)a;
}
int compare(const void* a, const void* b) {
    char ca = *(char*)a;
    char cb = *(char*)b;
    return cb - ca;
}
int compare_negative(const void* a, const void* b) {
    char ca = *(char*)a;
    char cb = *(char*)b;
    return ca - cb;
}


int compareArray(const void* a, const void* b) {
    return strcmp((char*)b, (char*)a);
}

bool isPrime (int n) {
    if (n <= 1){
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
         return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

ll fibo(int n){
    ll f[n + 1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    } 
    return f[n];
}

long long gcd(long long a, long long b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}

ll isFibonacci(ll n) {
    if (n < 0) {
        return 0;
    }

    ll a = 0;
    ll b = 1;
    while (a < n) {
        ll temp = a;
        a = b;
        b = temp + b;
    }

    return (n == a);
}

void sang(){
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i <= maxn; i++){
        a[i] = 1;
    }
    for (int i = 2; i <= sqrt(maxn); i++){
        if (a[i]){
        for (int j = i * i; j <= maxn; j += i){
            a[j] = 0;
            }
        }
    }
}

bool checksumofdigitdivideby5(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (sum % 5 == 0){
        return true;
    }
    return false;
}

int palindromecheck(int n){
    int temp = n;
    int sum = 0;
    while (n > 0){
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if (sum == temp){
        return 1;
    }
    return 0;
}
int without9check(int n){
    while (n > 0){
        if (n % 10 == 9){
            return 0;
        }
        n /= 10;
    }
    return 1;
}


bool check10(ll n){
    int sum = 0;
    while (n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (sum % 10 != 0){
        return false;
    }
    return true;
}

int legendre(int n, int p){
    int ans = 0;
    while (n){
        ans += n / 2;
        n /= 2;
    }
    return ans;
}

bool checkprimeandsumprime(int n){
    int sum = 0;
    while (n > 0){
        if (!isPrime(n % 10)){
            return false;
        }
        sum += n % 10;
        n /= 10;
    }
    if (!isPrime(sum)){
        return false;
    }
    return true;
}

ll factorial(ll n){
    if (n == 0){
        return 1;
    }
    ll fac = 1;
    for (ll i = 1; i <= n; i++){
        fac *= i;
    }
    return fac;
}

bool checksumofdigitfactorial(ll n){
    if (n == 0){
        return false;
    }
    ll sum = 0;
    ll temp = n;
    while (n > 0){
        ll digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    if (sum == temp){
        return true;
    }
    return false;
}

bool prettynumber(char arr[], int n){
    int first = arr[0] - '0';
    int last = arr[n - 1] - '0';
    if (first != 2 * last && last != 2 * first){
        return false;
    }
    //palindrom check from second to second last
    for (int i = 1; i < n - 1; i++){
        if (arr[i] != arr[n - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
    #endif
  int t;
  scanf("%d", &t);
  while(t--){
    int m;
    scanf("%d", &m);
    int end = pow(10, m);
    int start = end / 10;
    int count = 0;
    for (int i = start; i < end; i++){
      if (check10(i) && palindromecheck(i)){
        count++;
      }
    }
    printf("%d\n", count);
  }
  
    return 0;
}