

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "image.h"
#include "block.h"
int blockSize = BLOCK_SIZE;



unsigned char *bread(int block_num, unsigned char *block) {
    off_t offset = block_num * blockSize;

    lseek(image_fd, offset, SEEK_SET);
    if (read(image_fd, block, blockSize)== -1){
        perror("read ");
    }
  
    

    return block;
}

void bwrite(int block_num, unsigned char *block) {
    off_t offset = block_num * blockSize;

    lseek(image_fd, offset, SEEK_SET);
    write(image_fd, block, blockSize);
}
