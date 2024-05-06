#include <stdio.h>
#include "ctest.h"

#include "image.h"
#include "block.h"
#include "ctest.h"




int main(void)
{
    unsigned char block[512];
//     // printf("Running normally!\n");
    printf("file_image = %d\n", image_open("file_name.txt", 200) );
    // printf("file close = %d\n" , image_close() );
    printf("bread test= %d\n",*bread(1, block) );
    bwrite(1, block );
    // printf( "bwrite test= %hhn\n" , block);
}

