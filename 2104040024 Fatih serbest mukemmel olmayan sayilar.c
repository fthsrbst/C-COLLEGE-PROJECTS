// M�kemmel olmayan say�lar� ekrana yazd�ran C kodu
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    //de�i�ken tan�mlama ks�m�
    int n, i, toplam;
    printf("\nMUKEMMEL OLMAYAN SAYILARI YAZAN C KODU :  \n\n");
    //d�ng� k�sm� for i�inde while
    for (n = 1; n <= 1000; n++) {
        i = 1;
        toplam = 0;
        while (i < n)
        {
            //modunu al�p tam b�lenlerini bulan k�s�m
            if (n % i == 0)
                toplam = toplam + i;
            i++;
        }
        //b�len toplam� e�it de�ilse yazd�rma k�sm�
        if (toplam != n)

            printf("%d ", n);

    }
    printf("\n\n1 ile 1000 arasindaki mukemmel sayiler : '6,28,496' ve bu sayilar sayi dizini icerisinde bulunmamaktadir.");
    
    
 


    return 0;
}
//FAT�H SERBEST 2104040024
