#define CTEST_ENABLE

#include <stdio.h>
#include "image.h"
#include "block.h"
#include "ctest.h"
#include <string.h>

void test_image(void){
    CTEST_ASSERT(image_open("file_name.txt", 1 ) != -1 , "testing trunk is 0 ");
    CTEST_ASSERT(image_close() != -1 , "testing close ");
}

void test_block(void)
{
    CTEST_ASSERT(image_open("file_name.txt", 1 ) != -1 , "testing trunk is 0 ");
    int block_num= 1; 
    unsigned char block[BLOCK_SIZE] = {0};
    unsigned char block1[BLOCK_SIZE] = "foo";
   

    bwrite(block_num, block);
    bread(block_num, block1); 

    CTEST_ASSERT(memcmp(block,block1, BLOCK_SIZE )== 0 , "testing block");
    
    image_close();
}


int main(void)
{
 
//     // printf("Running normally!\n");

    CTEST_VERBOSE(1);

    test_image();

    test_block(); 

    // printf("file_image = %d\n", image_open("file_name.txt", 200) );
    // // printf("file close = %d\n" , image_close() );
    // printf("bread test= %d\n",*bread(1, block) );
    // bwrite(1, block );
    // // printf( "bwrite test= %hhn\n" , block);
}

