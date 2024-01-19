 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>
typedef long long ll;

void solve(int a){
    char s[a + 5], c[a + 5];
    char res[2 * a + 5];
    scanf("%s%s%s", s, c, res);
    int n = a;
    char tmp1[a + 5], tmp2[a + 5];
    strcpy(tmp1, s);
    strcpy(tmp2, c);
    int step = 0;
    char tmp[2 * a + 5];
    while(1){
    for (int i = 0; i <= 2*n; i++){
        tmp[2*i] = c[i];
        tmp[2*i + 1]= s[i];
    }
    for (int i = 0; i<n;i++){
        s[i] = tmp[i];
    }
    int cnt = 0;
    for (int i = n; i<=2*n;i++){
        c[cnt++] = tmp[i];
    }
    step++;
    if (strcmp(tmp, res) == 0){
        break;
    }
    if (strcmp(tmp1, s) == 0 && strcmp(tmp2, c) == 0){
        step = -1;
        break;
    }
    }
    printf("%d\n", step);
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(1){
        int n;
        scanf("%d", &n);
        if(!n){
            break;
        }
        solve(n);
    }
    
}