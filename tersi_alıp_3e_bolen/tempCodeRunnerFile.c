#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void hastakayitekleme()
{
	void hastakayitekleme()
{
    int adi[20],soyadi[20],cinsiyet[10],hastalik[20];
    int dogumtarihi[10];
    int hastaid[10]={0,1,2,3,4,5,6,7,8,9}; 
    int i,secim;
    
for(i=0;i<=9;i++){

    printf("Hasta Adi Girin:  ");
    scanf("%s",&adi[i]);
    printf("Hasta Soyadi Girin:  ");
    scanf("%s",&soyadi[i]);
    printf("Hasta Cinsiyet Girin:  ");
    scanf("%s",&cinsiyet[i]);
    printf("Hasta Dogum Tarihi Girin:  ");
    scanf("%d",&dogumtarihi[i]);
    printf("Hastaligini Giriniz:  ");
    scanf("%s",&hastalik[i]);
    FILE hastakayit=fopen("hastid.txt","w");
    fprintf(hastakayit,"%s,%s,%s,%d,%s",adi,soyadi,cinsiyet,dogumtarihi,hastalik);
    printf("Hasta Kaydedildi\n");
    fclose (hastakayit);
    printf("1,2");
    scanf("%d",&secim);
    if(secim==0){
        break;
    }
    else;
    {
        hastakayitekleme();
    }
}
}
}

void hastakayitduzenleme()

{
    char adi[20],soyadi[20],cinsiyet[10],hastalik[20];
	int dogumtarihi;
	printf("Hasta Adi Girin:  ");
	scanf("%s",adi);
	printf("Hasta Soyadi Girin:  ");
	scanf("%s",soyadi);
	printf("Hasta Cinsiyet Girin:  ");
	scanf("%s",&cinsiyet);
	printf("Hasta Dogum Tarihi Girin:  ");
	scanf("%d",&dogumtarihi);
	printf("Hastaligini Giriniz:  ");
	scanf("%s",&hastalik);
	FILE *hastakayit=fopen("hastakayit.txt","w");
	fprintf(hastakayit,"%s,%s,%s,%d,%s",adi,soyadi,cinsiyet,dogumtarihi,hastalik);
	printf("Hasta Kaydi Degistirildi\n");
	fclose (hastakayit);		
}

void hastakayitgoruntuleme()

{
	FILE *hastakayit=fopen("hastaid.txt","r");
	while(! feof(hastakayit) )
	{
    putchar(fgetc(hastakayit));
	}
	fclose(hastakayit);
}

void hastakayitsilme()

{
	int id;
	printf("ID girin");
	scanf("%d",&id);
	FILE *hastakayit=remove(id+".txt");
	printf("Kayit Silindi");
}

int menu()

    {
	int secim;
	printf("\n------HASTA KAYIT SISTEMI------\n\n");
	printf("1- Hasta Kayit Ekleme\n");
	printf("2- Hasta Kayit Duzenleme\n");
	printf("3- Hasta Kayit Goruntuleme\n");
	printf("4- Hasta Kayit Silme\n");
	printf("0- Programi Kapat\n\n");
	printf("Seciminiz :  ");
	scanf("%d",&secim);
	
	return secim;
	}

int main() {

	int secim= menu();
	while (secim!=0)
	{
     switch (secim)
     {
     case 1: hastakayitekleme(); break;
     case 2: hastakayitduzenleme(); break;
     case 3: hastakayitgoruntuleme(); break;
     case 4: hastakayitsilme(); break;
     case 0: break;
     default: printf("Hatali Sayi Girdiniz!! \n"); break;
     }
     secim=menu();
	}
	
	return 0;
}