#include <stdio.h>
#include <SDL2/SDL.h>


int main (int argc, char* argv[]){

if ( SDL_Init(SDL_INIT_EVERYTHING) !=0)
{
    printf("error %s \n" ,SDL_GetError());
    return 0;

}
printf("sdl suc init \n");
SDL_Quit();
return 0;


}