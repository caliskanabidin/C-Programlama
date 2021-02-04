//öðrenci bilgileri

#include<stdio.h>

main()
{
	char ad[20],soyad[20],bolum[20],sinif[10];
	int OgrNo;
	
	printf("Adi: ");
	scanf("%s",&ad); 
	printf("Soyadi: ");
	scanf("%s",&soyad);
	printf("Bolumu: ");
	scanf("%s",&bolum);
	printf("Sinifi: ");
	scanf("%s",&sinif);
	printf("Ogrenci No: ");
	scanf("%d",&OgrNo);
	printf("-Ogrenci Bilgileri-\n");
	printf(" Adi = %s\n Soyadi = %s\n Bolumu = %s\n Sinifi = %s\n Ogrenci No = %d",ad,soyad,bolum,sinif,OgrNo);
}

