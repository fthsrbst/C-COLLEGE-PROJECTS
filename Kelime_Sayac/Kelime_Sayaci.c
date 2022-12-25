#include<stdio.h>
#include <string.h>


#define MAX_WORDS 1000  // Kelime sayısının maksimumu
#define MAX_WORD_LEN 50  // Kelimenin maksimum uzunluğu


int kelime_listele(){
 
  // Dosyayı açın
  FILE* file = fopen("dosya.txt", "r");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  char words[MAX_WORDS][MAX_WORD_LEN];  // Kelimeleri tutacak dizi
  int word_counts[MAX_WORDS] = {0};  // Kelime sayılarını tutacak dizi
  int num_words = 0;  // Toplam kelime sayısı

char line[200]; // Dosyadaki bir satırı okumak için kullanılacak dizi
while (fgets(line, sizeof(line), file)) { // Satır satır oku
char* word = strtok(line, " "); // Satırdaki ilk kelimeyi al
while (word != NULL) { // Satırdaki kelimeleri oku
// Kelime dizisinde zaten var mı?
int found = 0;
for (int i = 0; i < num_words; i++) {
if (strcmp(word, words[i]) == 0) {
// Eşleşen kelime bulundu, sayacı artır
word_counts[i]++;
found = 1;
break;
}
}
if (!found) { // Kelime dizide yoksa, ekle
strcpy(words[num_words], word);
word_counts[num_words] = 1;
num_words++;
}
word = strtok(NULL, " "); // Sonraki kelimeyi al
}
}

// En sık kullanılan kelimeleri bulun ve yazdırın
printf("\n\nEn cok kullanilan kelimeler:\n");
for (int i = 0; i < 5; i++) {
// En yüksek sayacı bulun
int max_index = 0;
for (int j = 1; j < num_words; j++) {
if (word_counts[j] > word_counts[max_index]) {
max_index = j;
}
}
// En yüksek sayacı yazdırın ve sayacı sıfırlayın
printf("%s: %d\n", words[max_index], word_counts[max_index]);
word_counts[max_index] = 0;
}

fclose(file); // Dosyayı kapat





}


int main(){
    char metin[1000];
    int i=1,kelime=0,harf=1,paragraf=1;
            
    printf("Lutfen Metni Giriniz : "); 
    gets(metin);


    while(metin[i]){
        if(metin[i]=='	')
        {
            paragraf++;
            }
        else if(metin[i]==' ' || metin[i]=='.')
        {
            kelime++;
            }
        else
        {
            harf++;
            }
        i++;
        }
    printf("\nGirmis oldugunuz metinde toplam %d tane paragraf, %d tane kelime, %d tane harf bulunmaktadir ",paragraf,kelime,harf);





      // Metni tutacak olan dizi
   
    // Dosyayi yazma modunda ac
    FILE* file = fopen("dosya.txt", "w");

    // Dosya acilmadiysa hata ver
    if (file == NULL)
    {
        printf("Dosya acilamadi.");
        return 1;
    }

    // Metni dosyaya yaz
    fprintf(file, "%s", metin);

    // Dosyayi kapat
    fclose(file);
    
    kelime_listele();


    return 0;
}