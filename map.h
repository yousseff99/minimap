#ifndef MAP_H_
#define MAP_H_


typedef struct image
{
	SDL_Surface *img;//wyn chnachargo image
	SDL_Rect pos;// Position mta3 background
}image;

image init_image(char nameofpicture[100],int x,int y);
void affichage(SDL_Surface *ecran,image img);
void librer_image(image img);




#endif
