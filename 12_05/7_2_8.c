#include <stdio.h>
#include <stdlib.h>

struct student
{
    char imie[20];
    char nazwisko[30];
    char adres[40];
    char pesel[11];
    char kierunek[30];
    char nr_legit[7];
};

void foo(struct student *s)
{
    printf("Podaj imie: ");
    scanf("%s", &s->imie);
    printf("Podaj nazwisko: ");
    scanf("%s", &s->nazwisko);
    printf("Podaj adres: ");
    scanf("%s", &s->adres);
    printf("Podaj PESEL: ");
    scanf("%s", &s->pesel);
}

int main()
{
    struct student stud;
    foo(&stud);
    printf("Imie: %s\n", stud.imie);
    printf("Nazwisko: %s\n", stud.nazwisko);
    printf("Adres: %s\n", stud.adres);
    printf("PESEL: %s\n", stud.pesel);
    return 0;
}
