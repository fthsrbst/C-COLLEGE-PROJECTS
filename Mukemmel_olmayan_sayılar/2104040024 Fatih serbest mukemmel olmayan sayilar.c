// Mükemmel olmayan sayýlarý ekrana yazdýran C kodu
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    //deðiþken tanýmlama ksýmý
    int n, i, toplam, min, max;
    min = 1;
    max = 1000;
    printf("\nMUKEMMEL OLMAYAN SAYILARI YAZAN C KODU :  \n\n");
    //döngü kýsmý for içinde while
    for (n = min; n <= max; n++) {
        i = 1;
        toplam = 0;
        while (i < n)
        {
            //modunu alýp tam bölenlerini bulan kýsým
            if (n % i == 0)
                toplam = toplam + i;
            i++;
        }
        //bölen toplamý eþit deðilse yazdýrma kýsmý
        if (toplam != n)

            printf("%d ", n);

    }
    printf("\n\n1 ile 1000 arasindaki mukemmel sayiler : '6,28,496' ve bu sayilar sayi dizini icerisinde bulunmamaktadir.");
    
    
 


    return 0;
}
//FATÝH SERBEST 2104040024
