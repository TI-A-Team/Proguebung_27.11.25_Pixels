/*
 ============================================================================
 Name        : Pixels.c
 Author      : Rafael Grabolus
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Pixel.h"

int main(void) {

	//Stack
	Pixel p;
	p.x = 10;
	p.y = 5;
	p.c = '*';

//	pixel_zeichnen(p);
	//Heap
	Pixel* pixel_ptr = (Pixel*) malloc(sizeof(Pixel));
	pixel_ptr->x = 3;
	pixel_ptr->y = 5;
	pixel_ptr->c = '#';

	//pixel_ausgabe(*pixel_ptr);

	/*Arrays_Stack
	Pixel sternenhimmel[50];
	for(int i=0; i<50; i++)
	{
		sternenhimmel[i].x = rand() % 30 + 2;
		sternenhimmel[i].y = rand() % 15 + 2;
		sternenhimmel[i].c = '*';
	}

	for(int i=0; i<50; i++)
	{
		pixel_zeichnen(sternenhimmel[i]);
	}
	*/

	//Arrays_Heap
	srand(time(NULL));
	int anzahl = rand() % 100 + 1;
	Pixel* galaxie = (Pixel*) malloc(sizeof(Pixel) * anzahl);
	for(int i = 0; i<anzahl; i++)
	{
		//folgende drei Zeilen äquivalent
		//galaxie[i].x = rand() % 30 + 2;
		//(*(galaxie+i)).x = rand() % 30 + 2;
		(galaxie+i)->x = rand() % 30 + 2;
		galaxie[i].y = rand() % 15 + 2;
		galaxie[i].c = '*';
	}

	for(int i=0; i<anzahl; i++)
	{
		pixel_zeichnen(galaxie[i]);
	}
	printf("\33[20;0H");


	return EXIT_SUCCESS;
}
