struct Pixel
{
	int x;
	int y;
	char c;
};
typedef struct Pixel Pixel;

void pixel_ausgabe (Pixel p)
{
	printf(" x = %2d    y = %2d    c = %c\n",p.x, p.y, p.c);
}

//gebe Zeichen c an Position x,y aus
void pixel_zeichnen(Pixel p)
{
	printf("\33[%d;%dH%c",p.y, p.x, p.c);
}


