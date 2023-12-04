#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define w (40)
#define h (30)

#define for_x for (register int x = 0; x < w; x++)
#define for_y for (register int y = 0; y < h; y++)

#define _idx(x,y) ((((x)<<5) + ((x)<<3)) + (y)) // for 320

unsigned char univ[h*w];
unsigned char b1[w], b2[w], tail[w], head[w];

void main()
{
    register unsigned char n;

    // register int rnd_v = 0x0110;
    // for_x for_y
    // {  
    //     rnd_v = ((rnd_v &(1u << 16))>>16) ^ ((rnd_v & (1u << 14))>>14) ^ ((rnd_v & (1u << 13))>>13) ^ ((rnd_v & (1u << 11))>>11) | rnd_v<<1;
    //     univ[_idx(y, x)] = rnd_v & 1;
    // }

    // for_x for_y
    // {  
    //    if(univ[_idx(y, x)])
    //         univ[_idx(y, x)] = 0;
    //     else
    //         univ[_idx(y, x)] = 1;
    // }

    univ[5] = 1;
    univ[45] = 1;
    univ[85] = 1;

    //while(1);

    while (1) {
        // game
        // prologue
        for_x {
            head[x] = univ[_idx(0, x)]; 
            tail[x] = univ[_idx(h-1, x)]; 
        }
        // kernel
        for (register int y = 0; y < h-1; y++) { 
            for_x {
                n = tail          [x ? x-1 : w-1 ] + tail     [x]      + tail          [x==w-1 ? 0 : x+1 ] +
                    univ[_idx(y  , x ? x-1 : w-1)] +                     univ[_idx(y  , x==w-1 ? 0 : x+1)] +
                    univ[_idx(y+1, x ? x-1 : w-1)] + univ[_idx(y+1,x)] + univ[_idx(y+1, x==w-1 ? 0 : x+1)]; 
                b1[x] = ((n | univ[_idx(y,x)]) == 3);
            }
            for_x {
                tail[x] = univ[_idx(y,x)];
                if (y > 0) 
                    univ[_idx(y-1, x)] = b2[x];
                b2[x] = b1[x];
            }
        }
        // epilogue
        for_x {
            n =       tail[x ? x-1 : w-1]  + tail[x] + tail[x==w-1 ? 0 : x+1] +
            univ[_idx(h-1, x ? x-1 : w-1)] + univ[_idx(h-1, x==w-1 ? 0 : x+1)] +
                        head[x ? x-1 : w-1]  + head[x] + head[x==w-1 ? 0 : x+1]; 
            b2[x] = ((n | univ[_idx(h-1, x)]) == 3);
        }
        for_x {
            univ[_idx(h-2, x)] = b1[x];
            univ[_idx(h-1, x)] = b2[x];
        }

	//int (*univ)[w] = u;
	    printf("\033[H");
	    for_y {
		    for_x printf(univ[_idx(y, x)] ? "\033[07m  \033[m" : "  ");
		    printf("\033[E");
	    }
    }

    return;
}