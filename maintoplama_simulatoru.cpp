#include <stdio.h>  // Standart Girdi/��kt� (printf, scanf) fonksiyonlar� i�in gerekli k�t�phane.
#include <stdlib.h> // Genel ama�l� fonksiyonlar� i�eren standart k�t�phane.

/*
  KONU: 6-Bit Kodlama Ortam� Sim�lasyonu ile Karakter Tabanl� Toplama
  A�IKLAMA: 
  Bu program, eski (Unix �ncesi) sistemlerin k�s�tl� girdi/��kt� ortam�n� sim�le eder.
  Bu t�r sistemlerde veri genellikle say�sal olarak de�il, karakter dizileri olarak i�lenirdi.
  Program�m, kullan�c�dan iki adet tek haneli rakam� say�sal de�er (integer) olarak de�il, 
  birer ASCII karakteri olarak okur. Ard�ndan bu karakterleri matematiksel say�lara d�n��t�rerek toplar.
  Sim�lasyonun bir k�s�tlamas� olarak, toplama sonucunun tek haneli bir rakam olmas� beklenir. 
  E�er toplam�n sonucu 9'u a�arsa (yani �ift haneli olursa), program bir hata mesaj� vererek bu kural� uygular.
*/
int main(int argc, char *argv[]) {
    // --- De�i�ken Tan�mlamalar� ---
    int sayi1, sayi2, toplam; // Matematiksel i�lemler i�in kullan�lacak tam say� de�i�kenleri.
    char karakter1, karakter2; // Kullan�c�dan al�nacak girdileri saklamak i�in karakter de�i�kenleri.
    
    // --- Girdi (Input) B�l�m� ---
    // Kullan�c�ya ne yapmas� gerekti�ini a��k�a belirtiyoruz.
    printf("Toplanacak ilk tek haneli rakami giriniz: ");
    // scanf ile kullan�c�dan TEK B�R KARAKTER okuyoruz. " %c" format�ndaki bo�luk,
    scanf(" %c", &karakter1);
    
    printf("Toplanacak ikinci tek haneli rakami giriniz: ");
    scanf(" %c", &karakter2);
    
    // --- ��lem B�l�m� ---
    // 1. Karakterden Say�ya D�n��t�rme:
    // ASCII tablosunda rakamlar ard���k olarak s�ralanm��t�r ('0', '1', '2'...).
    // �rne�in, '7' karakterinin ASCII de�erinden '0' karakterinin ASCII de�erini ��kard���m�zda,
    // ortaya matematiksel olarak 7 say�s� ��kar. Bu, karakterleri say�ya �evirmenin standart bir yoludur.
    sayi1 = karakter1 - '0';
    sayi2 = karakter2 - '0';

    // 2. Toplama ��lemi:
    toplam = sayi1 + sayi2;
    
    // --- ��kt� (Output) ve Kontrol B�l�m� ---
    // 3. Sonucun Kontrol Edilmesi:
    // Program�n ak���n� 'if-else' yap�s� ile kontrol ediyoruz.
    // Program bu noktada bir karar vermek zorundad�r: Toplam 9'dan b�y�k m�, de�il mi ona bakar.
    if (toplam > 9) {
        // E�ER toplam 9'dan B�Y�KSE, bu blok �al���r.
        // Sadece hata mesaj� ekrana ��kar.
        printf("\nHATA! Toplama isleminin sonucu cift haneli (%d) olamaz.\n", toplam);
    } else {
        // E�ER toplam 9 veya daha K���KSE, bu blok �al���r.
        // Sadece ba�ar�l� sonu� mesaj� ekrana ��kar.
        printf("\nSayilarin toplami: %d\n", toplam);
    }
    
    return 0; // Program�n ba�ariyla bitti�ini i�letim sistemine bildirir.
}
