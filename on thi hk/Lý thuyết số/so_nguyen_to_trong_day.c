#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
typedef long long ll;

bool checkprime(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            if (checkprime(x)){
                printf("%d ", x);
            }
        }
        printf("\n");
    }
}