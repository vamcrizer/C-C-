 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

typedef long long ll;
int a[1001] = {0};

int check(int a[],int n){
    for (int i = n; i >= 1; i--){
        if (a[i] == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);
    int d;
    scanf("%d", &d);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < d; i++){
        int x;
        scanf("%d", &x);
        for (int j = x; j <= x + k; j++){
            if (j <= n){
                a[j]++;
            }
        }
        for (int h = x; h >= x - k; h--){
            if (h >= 1){
                a[h]++;
            }
        }
    }
    int cnt = 0;
    while(check(a, n) != -1){
        int pos = check(a, n);
        if (pos != -1){
            for (int j = pos - k - k; j <= pos; j++){
                a[j]++;
            }
            cnt++;
        } else {
            break;
        }
    }
    printf("%d", cnt);
}