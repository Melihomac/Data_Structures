#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
	system("color a");
	
	int i,sayi=0,ortsayi=0,top=0,max,min,adet;
	printf("Adet Girin: ");
	scanf("%d",&adet);
	for(i=0;i<adet;i++)
	{
		printf("Enter your value: ",i);
		scanf("%d",&sayi);
		top=top+sayi;
		if(i==0){                // D�ng� ilk d�nd���nde yani i=0 da buyuk de�i�kenini sayiya e�itliyoruz.
            max = sayi;        // Bu e�itlemeyi yapmazsak e�er kar��la�t�racak buyuk de�eri olmayacak.
        }
        //D�ng� ilk defa d�nm�yorsa e�er!!!
        else{            
            //Buyuk de�eri yeni girilen sayidan k���kse en b�y�k de�er o olmad��� i�in buyuk de�erini de�i�tiriyoruz.
            if(max<sayi){
                max=sayi;
            }
        }
        if(i==0){
        	min=sayi;
		}
		else{
			if(min>sayi){
				min=sayi;
			}
		}
	}
	printf("En buyuk sayi= %d\n", max);
	printf("En kucuk sayi= %d\n",min);
	ortsayi=top/i;
	printf("Average Value is : %d",ortsayi);
	return 0;
}
