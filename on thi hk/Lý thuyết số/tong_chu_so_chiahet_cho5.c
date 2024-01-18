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
    int tmp = n;
    int res = 0;
    while(n > 0){
        int digit = n % 10;
        res = res * 10 + digit;
        if (digit == 9){
            return 0;
        }
        n /= 10;
    }
    return res == tmp;
}

int main(){
    int n;
    scanf("%d" ,&n);
    int cnt = 0;
    for (int i = 2; i < n; i++){
        if (sum_of_digit(i)){
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d", cnt);
}