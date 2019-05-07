#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include "map.h"

image init_image(char nameofpicture[100],int x,int y)
{
image image;
image.img=IMG_Load(nameofpicture);//load image
image.pos.x=x;//position x de bg
image.pos.y=y;//position y de bg
return image;
}
void affichage(SDL_Surface *ecran,image image)
{
SDL_BlitSurface(image.img,NULL,ecran,&image.pos);
}

void librer_image(image image)
{
 SDL_FreeSurface(image.img);//Liberer memoire
}

