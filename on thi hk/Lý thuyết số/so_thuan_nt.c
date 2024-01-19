 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>
typedef long long ll;

int nt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int sum_of_digit(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        if (!nt(digit)){
            return 0;
        }
        sum += digit;
        n /=10;
    }
    return nt(sum);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for (int i = a; i <= b; i++){
            if (sum_of_digit(i) && nt(i)){
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}