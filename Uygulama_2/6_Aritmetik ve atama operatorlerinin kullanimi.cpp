/* Aritmetik ve atama operat�rlerinin kullan�m� */

#include <stdio.h>

main()
{
    int x, y, sonuc;  /* yerel degikenlerin bildirimi */

   

    printf("x degerini giriniz: ");
    scanf("%d",&x);
    printf("\n");
    printf("y degerini giriniz: ");
    scanf("%d",&y);
     printf("\n");

 	sonuc=x*x+4*y+9;
 	
    printf("Sonuc = %d olur.\n", sonuc);
}
