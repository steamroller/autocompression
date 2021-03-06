#ifndef DECOMPRESSION_H
#define DECOMPRESSION_H
#include <SDL/SDL.h>
#include <err.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "pixel_operations.h"
#include "display.h"
typedef struct bloc
{
    int r;
    int g;
    int b;
    int col;
    int lin;
    struct bloc *next;
} bloc;

typedef struct DM_Im
{
    int colonnes;
    int lines;
    struct bloc *bloc;
    struct DM_Im *next;
} DM_Im;

struct bloc *initbloc(int col,int line);
struct DM_Im *initDM_Im(int col, int lin);
void freebloc(struct bloc *b);
void freeDM_Im(struct DM_Im *d);
int nombredec(int nb);
double C(int pos);
SDL_Surface *insertionDCTI(struct DM_Im *dm);
struct DM_Im *decodage(char *path,char *path2);

#endif
