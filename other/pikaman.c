#include<stdio.h>
#include<string.h>
int main() {
    int pikaman;
    char buffer[200];
    char temp[200];
    scanf("%d", &pikaman);
    gets(buffer);
    char pokedex[pikaman][200];
    int evo[pikaman][2];
    for (int pika = 0; pika<pikaman; pika++){
        gets(temp);
        for (int pos = 0; pos <= strlen(temp); pos++){
            pokedex[pika][pos]=temp[pos];
        }
        for (int i = 0; i<2; i++){
            scanf("%d", &evo[pika][i]);
        }
        gets(buffer);
    }
    int lvl = 0;
    int evocount = 0;
    int maxevo = 0;
    int maxpos = 0;
    for (int no = 0; no < pikaman; no++){
        while (evo[no][1]>=evo[no][0]){
            lvl++;
            evocount++;
            evo[no][1] = evo[no][1]-evo[no][0]+2;
        }
        if (lvl > maxevo){
            maxevo = lvl;
            maxpos = no;
        }
        lvl = 0;
    }
    int j = 0;
    printf("%d\n", evocount);
    while (pokedex[maxpos][j] != 0){
        printf("%c", pokedex[maxpos][j]);
        j++;
    }
    return 0;
}
