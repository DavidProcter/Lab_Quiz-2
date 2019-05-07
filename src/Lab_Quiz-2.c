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


int main() {

	float image[5][5][3];
	int x, y, z;

	// Don’t change this srand() line!
	srand(0);

	for(y = 0; y < 5; y++) {
		for(x = 0; x < 5; x++) {
			image[x][y][0] = (float)rand()/(float)INT_MAX;
			image[x][y][1] = (float)rand()/(float)INT_MAX;
			image[x][y][2] = (float)rand()/(float)INT_MAX;
		}
	}

	printf("Image Array is:");
			for (y=0; y<5; y++){
				for (x=0; x<5; x++){
					printf("\n");
					for (z=0; z<3; z++){
						printf("(%d:%d:%d)", x, y, z);
						printf("%f,", image[x][y][z]);

					}
				}
			}
			printf("\n\n");
	// ----------------------------------------
	// Write your code below this comment block
	// ----------------------------------------
	return 0;
}
