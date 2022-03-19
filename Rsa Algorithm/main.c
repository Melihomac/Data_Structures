#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RSA(int p, int q, int e, int d) {
	int i, KeyPublic, e2;
	int N = p*q;
	int fiN	= (p-1)*(q-1);
	for(i=1;i<e && i<=fiN;i++) {
		if (e<fiN) {
			e2 = e+fiN;
			if(e2%i==0 && fiN%i==0){
				KeyPublic = abs(i);
			}
		}
	}
	int Mod = e*d;
	int KeyPrivate = Mod%fiN;
	int number;
	printf("Type your number for Encryption and Decryption= ");
	scanf("%d",&number);
	int exp = pow(number,e);
	int y = exp % N;
	//int yexp = pow(y,d); If Yexp number is too big
	int dec;
	if(N>y){
		dec = N-y;
		int decExponential = pow(dec,d);
		int result = (decExponential+number) % N;
		printf("Your number is Encrypted and Decrypted: %d\n",number);
	}
	return printf("p value is %d and q value is %d and e value is %d and d value is %d\nN= %d\nfiN= %d\nKeyPublic= %d\nKeyPrivate= %d",p,q,e,d,N,fiN,KeyPublic,KeyPrivate);
}

int main(int argc, char *argv[]) {
	RSA(3,11,3,7);
	return 0;
}
