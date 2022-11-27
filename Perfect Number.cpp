//mukemmel olan sayýlarý ekrana yazdýran C kodu
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    //deðiþken tanýmlama ksýmý
    int n, i, toplam;
    printf("\nTHERE ARE PERFECT NUMBERS :  \n\n");
    //döngü kýsmý for içinde while
    for (n = 1; n <= 1000; n++) {
        i = 1;
        toplam = 0;
        while (i < n)
        {
            //modunu alýp tam bölenlerini bulan kýsým
            if (n % i == 0)
                toplam = toplam + i;
            i++;
        }
        //bölen toplamý eþitse yazdýrma kýsmý
        if (toplam == n)

            printf("%d ", n);

    }

    
    
 


    return 0;
}
