#include <stdio.h>



#include "image.h"
#include "block.h"

#ifdef CTEST_ENABLE

void test_image_open(void)
{
    CTEST_ASSERT(image_open("file_name.txt", 0 ) == (image_fd !=-1), "testing trunk is 0 ");
}

void test_image_close(void){
    CTEST_ASSERT(image_close() == image_fd , "testing close ");
}
void test_bread(void)
{
    CTEST_ASSERT(*bread(1, block) == 1, "testing bread " );
    
}
// void test_bwrite(void){
//     CTEST_ASSERT(bwrite(1, block), "testing bwrite ");
//  }
int main(void)
{
    CTEST_VERBOSE(1);

    test_image_open();
    test_image_close();
    test_bread();
    // test_bwrite();

    CTEST_RESULTS();

    CTEST_EXIT();
}

#else

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

#endif