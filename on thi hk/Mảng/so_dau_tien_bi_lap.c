 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>
typedef long long ll;

struct danhsach{
    int value;
    int pos;
    int freq;
};
typedef struct danhsach ds;

int cmp(const void *a, const void *b){
    ds *x = (ds*)a;
    ds *y = (ds*)b;
    if (x->freq == y->freq){
        return x->pos - y->pos;
    }
    return y->freq - x->freq;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        ds a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i].value);
            a[i].pos = i;
            a[i].freq = 1;
        }
        for (int i = 0; i < n; i++){
            a[i].freq++;
        }
    qsort(a, n, sizeof(ds), cmp);
    printf("%d %d\n", a[0].value, a[0].freq);
    }
}