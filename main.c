#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const char *nameProdukt[]=
{
    "Coca-Cola",
    "Red Bull",
    "Fanta Orange",
    "Fanta Zitrone",
    "Nestea",
    "Coca-Cola Zero",
    "Coca-Cola Light",
    "Wasser",
};

const float wertProdukt[]=
{
    2.25,
    3.00,
    1.70,
    1.70,
    2.00,
    2.25,
    2.25,
    1.50,
};


const char *nameMuenzen[]=
{
    "2 EUR",
    "1 EUR",
    "50 CENT",
    "20 CENT",
    "10 CENT",
    "5 CENT",
    "2 CENT",
    "1 CENT",
};

const float wertMuenzen[]=
{
    2.00,
    1.00,
    0.50,
    0.20,
    0.10,
    0.05,
    0.02,
    0.01,
};

int main()
{
    printf("Waehlen Sie ein Produkt aus der Liste 1-8\n");
    for(int i=0;i<8;i++)
    {
        printf("%s\n",nameProdukt[i]);
    }

    printf("\nWahl:\n");
    int wahlEingabe;
    scanf("%d",&wahlEingabe);

    printf("Ihre Produkt %s Preis: %.2f EUR\n", nameProdukt[wahlEingabe-1], wertProdukt[wahlEingabe-1]);

    printf("\nAkzeptierte Muenzen 1-8\n");
    for(int i=0;i<8;i++)
    {
        printf("%s\n",nameMuenzen[i]);
    }

    float zielPreis=wertProdukt[wahlEingabe-1];
    float geldSumme=0;
    int geldEingabe=0;

    do
    {
        printf("Geben Sie Muenzen ein. 0 zum Abbrechen. Aktueller Betrag: %.2f EUR\n", geldSumme);
        scanf("%d",&geldEingabe);

        if(geldEingabe==0)
        {
            break;
        }
        else
        {
            geldSumme += wertMuenzen[geldEingabe-1];
        }

    } while(geldSumme<zielPreis);

    printf("\nAktueller Betrag: %.2f Geniessen Sie Ihr %s. Vergessen Sie Ihre Restgeld nicht: %.2f EUR\n",geldSumme,nameProdukt[wahlEingabe-1],geldSumme-zielPreis);

    return 0;
}
