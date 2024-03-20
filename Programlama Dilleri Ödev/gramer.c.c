#include <stdio.h>  // Ahmet Hakan YILMAZ
#include <string.h>  // 02210224022

 main() {
	
	// �zne,Nesne ve Y�klem dizileri
     char *oznedizisi[] = {"Ben", "Sen", "Hasan", "Nur�ah", "Elif", "Abdulrezzak", "�ehribanu", "Zeynelabidin", "Naki"};
     char *nesnedizisi[] = {"Bah�e", "Okul", "Park", "S�n�f", "Yar�n", "Pazartesi", "Sal�", "�ar�amba", "Per�embe","Cuma", "Cumartesi", "Pazar", "Merkez", "Ev", "Kitap", "Defter", "G�ne�", "Beyda��"};
     char *yuklemdizisi[] = {"Gitmek", "Gelmek", "Okumak", "Yazmak", "Y�r�mek", "G�rmek"};
	
    char cumle[100];
    printf("Bir Cumle Girin: ");
    fgets(cumle, sizeof(cumle), stdin);

    // C�mlenin sonunda eklenen newline karakterini kald�r�yoruz
    cumle[strcspn(cumle, "\n")] = '\0';

    // C�mledeki bo�luk karekterlerinden kurtul
    char *kelime = strtok(cumle, " ");
    char *kelimeler[3];
    int kelimesayisi = 0;

    while (kelime != NULL && kelimesayisi < 3) { // ozne, nesne ve yuklem kelimeler dizisine ayr�l�r
        kelimeler[kelimesayisi++] = kelime;
        kelime = strtok(NULL, " ");
    }

    // �zne, Nesne ve Y�klem olarak ayr�lm�� kelimeleri al�yoruz
    char *ozne = kelimeler[0];
    char *nesne = kelimeler[1];
    char *yuklem = kelimeler[2];

    // �zne, Nesne ve Y�klem dizisinde mi kontrol ediyoruz
    if (kontrol(ozne, oznedizisi, 9) && kontrol(nesne, nesnedizisi, 18) && kontrol(yuklem, yuklemdizisi, 6)) {
        printf("EVET");
    }
	 else {
        printf("HAYIR");
    }

    return 0;
}

// Bir kelimenin dizi i�inde olup olmad���n� kontrol eder
int kontrol(char *kelime, char **kume, int diziboyutu) {
	int i=0;
    for ( i = 0; i<diziboyutu ; ++i) {
        if (strcmp(kelime, kume[i]) == 0) {
            return 1; // Kelime k�mede bulundu
        }
    }
    return 0; // Kelime k�mede bulunamad�
}
