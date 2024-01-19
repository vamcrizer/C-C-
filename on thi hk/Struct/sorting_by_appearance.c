#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

struct danhsach{
    int val;
    int freq;
    int pos;
};
typedef struct danhsach ds;

int cmp1(const void *a, const void *b){
    ds *x = (ds*)a;
    ds *y = (ds*)b;
    return x->val - y->val;
}

int cmp2(const void *a, const void *b){
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
    ds a[n], b[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i].val);
        a[i].freq = 1;
        a[i].pos = i;
    }
    qsort(a, n, sizeof(ds), cmp1);
    b[0] = a[0];
    int cnt = 0;
    for (int i = 1; i < n; i++){
        if (a[i].val == a[i - 1].val){
            b[cnt].freq++;
        } else {
            b[++cnt] = a[i];
        }
    }
    qsort(b, cnt + 1, sizeof(ds), cmp2);
    for (int i = 0; i <= cnt; i++){
        for (int j = 0; j < b[i].freq; j++){
            printf("%d ", b[i].val);
        }
    }
    printf("\n");
    }
}