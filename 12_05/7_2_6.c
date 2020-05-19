#include <stdio.h>
#include <stdlib.h>
struct punktn
{
    int wymiar;
    float *tabn;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i].wymiar = tab1[i].wymiar;
        tab2[i].tabn = malloc(tab1[i].wymiar * sizeof(float));
        for (int j = 0; j < tab1[i].wymiar; j++)
        {
            tab2[i].tabn[j] = tab1[i].tabn[j];
        }
    }
}

void wypiszStrukture(struct punktn tmp)
{
    printf("Wymiar:%d\n", tmp.wymiar);
    for (int i = 0; i < tmp.wymiar; i++)
    {
        printf("%f ", tmp.tabn[i]);
    }
    printf("\n");
}

void wypiszTabele(struct punktn tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        wypiszStrukture(tab[i]);
    }
    printf("-------------\n");
}

int main()
{
    struct punktn p1 = {.wymiar = 3};
    p1.tabn = malloc(3 * sizeof(float));
    p1.tabn[0] = 3.0;
    p1.tabn[1] = 3.1;
    p1.tabn[2] = 3.2;

    struct punktn p2 = {.wymiar = 4};
    p2.tabn = malloc(4 * sizeof(float));
    p2.tabn[0] = 4.0;
    p2.tabn[1] = 4.1;
    p2.tabn[2] = 4.2;
    p2.tabn[3] = 4.3;

    struct punktn p3 = {.wymiar = 2};
    p3.tabn = malloc(2 * sizeof(float));
    p3.tabn[0] = 2.0;
    p3.tabn[1] = 2.1;

    struct punktn p4 = {.wymiar = 3};
    p4.tabn = malloc(3 * sizeof(float));
    p4.tabn[0] = 1.0;
    p4.tabn[1] = 1.1;
    p4.tabn[2] = 1.2;
    struct punktn tablica[4] = {p1, p2, p3, p4};
    struct punktn tablica2[4] = {p1, p1, p1, p1};
    wypiszTabele(tablica, 4);
    wypiszTabele(tablica2, 4);
    przepisz(tablica, tablica2, 4);
    printf("Po zmianie:\n");
    wypiszTabele(tablica, 4);
    wypiszTabele(tablica2, 4);
    return 0;
}
