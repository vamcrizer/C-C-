#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct DS
{
    int value, ap, idx;
};

int cmpfunc(const void *a, const void *b){
    struct DS *x = (struct DS*)a;
    struct DS *y = (struct DS*)b;
    if (x->ap == y->ap){
        return x->idx < y->idx;
    }
    return x->ap < y->ap;
}

int cmpfunc2(const void *a, const void *b){
    struct DS *x = (struct DS*)a;
    struct DS *y = (struct DS*)b;
    if (x->value == y->value){
        return x->idx - y->idx;
    }
    return x->value - y->value;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int cnt = 0;
        scanf("%d", &n);
        struct DS *ds = (struct DS *)malloc(n * sizeof(*ds));
        struct DS *bs = (struct DS *)malloc(n * sizeof(*bs));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &bs[i].value);
            bs[i].idx = i;
        }
        qsort(bs, n, sizeof(*bs), cmpfunc2);
        for (int i = 0; i < n; i++)
        {
            if (bs[i].value == bs[i + 1].value)
            {
                ds[cnt].ap = 0;
                ds[cnt].idx = bs[i].idx;
                while (bs[i].value == bs[i + 1].value)
                {
                    ds[cnt].value = bs[i++].value;
                    ds[cnt].ap++;
                }
                ds[cnt].ap++;
                cnt++;
            }
            else
            {
                ds[cnt].ap = 1;
                ds[cnt].idx = bs[i].idx;
                ds[cnt].value = bs[i].value;
                cnt++;
            }
        }

        qsort(ds, cnt, sizeof(*ds), cmpfunc);
        for (int i = cnt; i >= 0; i--)
        {
            for (int j = 0; j < ds[i].ap; j++)
                printf("%d ", ds[i].value);
        }
        printf("\n");
    }
}