/*
 ============================================================================
 Name        : Lab_Quiz-2.c
 Author      : David Procter
 Version     : 000
 Copyright   : Copyright - David Procter
 Description : Lab quiz 2, startup file.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void pixelMean(float *r, float *g, float *b);



int main() {

	float image[5][5][3];
	int x, y;

	FILE *inFile;

	// Don’t change this srand() line!
	//srand(0);

	inFile = fopen("text_file.txt" , "r");


	for(y = 0; y < 5; y++) {
		for(x = 0; x < 5; x++) {

			fscanf(inFile,"%f %f %f", &image[x][y][0], &image[x][y][1], &image[x][y][2]);
			printf("%d: %f %f %f \n", x, image[x][y][0],image[x][y][1],image[x][y][2]);
		}
	}
	fclose(inFile);
	printf("\n\nMean\n");
	// ----------------------------------------
	// Write your code below this comment block
	// ----------------------------------------
		for(y = 0; y < 2; y++) {
			for(x = 0; x < 5; x++) {
				pixelMean(&image[x][y][0], &image[x][y][1],&image[x][y][2]);
				printf("%d %d: %f %f %f \n", x , y, image[x][y][0],image[x][y][1],image[x][y][2]);
				}
		}


	return 0;
}

void pixelMean(float *r, float *g, float *b){

	float pxM;

	pxM= ((*r)+(*g)+(*b))/3;
	*r=pxM;
	*g=pxM;
	*b=pxM;
	return ;
}
