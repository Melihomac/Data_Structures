#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void drawIntersectLines(void);
void drawBaseLines(void);
void drawCircle(void){
	printf("   ***   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   ***   \n");
}
void drawTriangle(void){
	drawIntersectLines();
	drawBaseLines();
}
void drawIntersectLines(void){
	printf("     *     \n");
	printf("    * *    \n");
	printf("   *   *   \n");
	printf("  *     *  \n");
}
void drawBaseLines(void){
	printf("  *******\n");
}
void drawParalelLines(void){
	printf("  *     *\n");
	printf("  *     *\n");
	printf("  *     *\n");
	printf("  *     *\n");
	printf("  *     *\n");
}

int main(void) {
	system("color a");
	
	drawCircle();
	drawTriangle();
	//drawIntersectLines();
	
	drawTriangle();
	drawParalelLines();
	drawBaseLines();
	return 0;
}
