#include <stdio.h>  // Standart Girdi/Çýktý (printf, scanf) fonksiyonlarý için gerekli kütüphane.
#include <stdlib.h> // Genel amaçlý fonksiyonlarý içeren standart kütüphane.

/*
  KONU: 6-Bit Kodlama Ortamý Simülasyonu ile Karakter Tabanlý Toplama
  AÇIKLAMA: 
  Bu program, eski (Unix öncesi) sistemlerin kýsýtlý girdi/çýktý ortamýný simüle eder.
  Bu tür sistemlerde veri genellikle sayýsal olarak deðil, karakter dizileri olarak iþlenirdi.
  Programým, kullanýcýdan iki adet tek haneli rakamý sayýsal deðer (integer) olarak deðil, 
  birer ASCII karakteri olarak okur. Ardýndan bu karakterleri matematiksel sayýlara dönüþtürerek toplar.
  Simülasyonun bir kýsýtlamasý olarak, toplama sonucunun tek haneli bir rakam olmasý beklenir. 
  Eðer toplamýn sonucu 9'u aþarsa (yani çift haneli olursa), program bir hata mesajý vererek bu kuralý uygular.
*/
int main(int argc, char *argv[]) {
    // --- Deðiþken Tanýmlamalarý ---
    int sayi1, sayi2, toplam; // Matematiksel iþlemler için kullanýlacak tam sayý deðiþkenleri.
    char karakter1, karakter2; // Kullanýcýdan alýnacak girdileri saklamak için karakter deðiþkenleri.
    
    // --- Girdi (Input) Bölümü ---
    // Kullanýcýya ne yapmasý gerektiðini açýkça belirtiyoruz.
    printf("Toplanacak ilk tek haneli rakami giriniz: ");
    // scanf ile kullanýcýdan TEK BÝR KARAKTER okuyoruz. " %c" formatýndaki boþluk,
    scanf(" %c", &karakter1);
    
    printf("Toplanacak ikinci tek haneli rakami giriniz: ");
    scanf(" %c", &karakter2);
    
    // --- Ýþlem Bölümü ---
    // 1. Karakterden Sayýya Dönüþtürme:
    // ASCII tablosunda rakamlar ardýþýk olarak sýralanmýþtýr ('0', '1', '2'...).
    // Örneðin, '7' karakterinin ASCII deðerinden '0' karakterinin ASCII deðerini çýkardýðýmýzda,
    // ortaya matematiksel olarak 7 sayýsý çýkar. Bu, karakterleri sayýya çevirmenin standart bir yoludur.
    sayi1 = karakter1 - '0';
    sayi2 = karakter2 - '0';

    // 2. Toplama Ýþlemi:
    toplam = sayi1 + sayi2;
    
    // --- Çýktý (Output) ve Kontrol Bölümü ---
    // 3. Sonucun Kontrol Edilmesi:
    // Programýn akýþýný 'if-else' yapýsý ile kontrol ediyoruz.
    // Program bu noktada bir karar vermek zorundadýr: Toplam 9'dan büyük mü, deðil mi ona bakar.
    if (toplam > 9) {
        // EÐER toplam 9'dan BÜYÜKSE, bu blok çalýþýr.
        // Sadece hata mesajý ekrana çýkar.
        printf("\nHATA! Toplama isleminin sonucu cift haneli (%d) olamaz.\n", toplam);
    } else {
        // EÐER toplam 9 veya daha KÜÇÜKSE, bu blok çalýþýr.
        // Sadece baþarýlý sonuç mesajý ekrana çýkar.
        printf("\nSayilarin toplami: %d\n", toplam);
    }
    
    return 0; // Programýn baþariyla bittiðini iþletim sistemine bildirir.
}
