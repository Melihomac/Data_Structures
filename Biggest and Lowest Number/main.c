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
		if(i==0){                // Döngü ilk döndüðünde yani i=0 da buyuk deðiþkenini sayiya eþitliyoruz.
            max = sayi;        // Bu eþitlemeyi yapmazsak eðer karþýlaþtýracak buyuk deðeri olmayacak.
        }
        //Döngü ilk defa dönmüyorsa eðer!!!
        else{            
            //Buyuk deðeri yeni girilen sayidan küçükse en büyük deðer o olmadýðý için buyuk deðerini deðiþtiriyoruz.
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
