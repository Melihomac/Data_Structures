#include <stdlib.h>
#include <stdio.h>

int *dizi = NULL;
int sira = 0, sirabasi = 0, boyut = 2;

int deque()
{
	int i;
	if (sira == sirabasi)
	{
		printf("sira bos");
		return -1;
	}
	if (sira - sirabasi <= boyut / 4)
	{
		int *dizi2 = (int *)malloc(sizeof(int) * boyut / 2);
		for (i = 0; i < sira - sirabasi; i++)
			dizi2[i] = dizi[sirabasi + i];
		free(dizi);
		dizi = dizi2;
		sira -= sirabasi;
		boyut /= 2;
		sirabasi = 0;
	}
	return dizi[sirabasi++];
}

void diziyitoparla()
{
	int i;
	if (sirabasi == 0)
		return 0;
	for (i = 0; i < boyut; i++)
		dizi[i] = dizi[i + sirabasi];
	sira -= sirabasi;
	sirabasi = 0;
}

void enque(int a)
{
	int i;
	if (dizi == NULL)
		dizi = (int *)malloc(sizeof(int) * 2);
	if (sira >= boyut)
	{
		boyut *= 2;
		int *dizi2 = (int *)malloc(sizeof(int) * boyut);
		for (i = 0; i < boyut / 2; i++)
			dizi2[i] = dizi[i];
		free(dizi);
		dizi = dizi2;
	}
	dizi[sira++] = a;
}

int main()
{
	int i;
	for (i = 0; i < 20; i++)
	{
		enque(i * 10);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d \n", deque());
	}
	diziyitoparla();
}
