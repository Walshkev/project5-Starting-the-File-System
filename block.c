#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "image.h"

int blockSize = 4096;

unsigned char *bread(int block_num, unsigned char *block) {
    off_t offset = block_num * blockSize;
   

    lseek(image_fd ,offset, SEEK_SET);

    read( image_fd , block , blockSize);
    
    
    return block;
}

void bwrite(int block_num, unsigned char *block) {
    int offset = block_num * blockSize;

   
    
    lseek(image_fd ,offset, SEEK_SET);
    write( image_fd , block , blockSize);
    

 
}
