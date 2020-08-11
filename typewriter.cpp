/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>
#include <string>

// constraints
#define MAXL 100010

// input data
char S1[MAXL], S2[MAXL], S3[MAXL], minima1[MAXL], minima2[MAXL], minima3[MAXL];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(1 == scanf("%s", S1));
    assert(1 == scanf("%s", S2));
    assert(1 == scanf("%s", S3));

    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;

    for(int i = 0; i < MAXL-1; i++) {
        if(S1[i] != S1[i+1]) {
            minima1[cont1] = S1[i];
            cont1++;
        }
        if(S2[i] != S2[i+1]) {
            minima2[cont2] = S2[i];
            cont2++;
        }
        if(S3[i] != S3[i+1]) {
            minima3[cont3] = S3[i];
            cont3++;
        }
    }

    std::string prova1(minima1);
    std::string prova2(minima2);
    std::string prova3(minima3);

    if(prova1 != prova2 || prova2 != prova3 || prova1 != prova3)
        printf("IMPOSSIBILE");
    else {
        char c;
        char res[MAXL];

        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;

        int cont1 = 0;
        int cont2 = 0;
        int cont3 = 0;

        int media = 0;

        while(cont1 < MAXL && cont2 < MAXL && cont3 < MAXL) {
            c = S1[cont1+1cont1++;];
            while(S1[cont1] == c) {
                cnt1++;
                cont1++;
            }
            while(S2[cont2] == c) {
                cnt2++;
                cont2++;
            }
            while(S3[cont3] == c) {
                cnt3++;
                cont3++;
            }

            /*printf("%d\n", cnt1);
            printf("%d\n", cnt2);
            printf("%d\n", cnt3);*/

            media = (cnt1 + cnt2 + cnt3) / 3;
            /*printf("%d\n",media);*/
            for(int i = 0; i < media; i++) {
                printf("%c", c);
            }

            cont1++;
            cont2++;
            cont3++;

            cnt1 = 0;
            cnt2 = 0;
            cnt3 = 0;
        }
        /*for(int i = 0; i < MAXL-1; i++)
            printf("%c", res[i]);*/
    }
    return 0;
}
