# project5-Starting-the-File-System
# image.c 

# image_open 

* this opens an image file or creates it if it does not exist  and truncates it 

# image close 
* closes the image file 


# block.c 

# bread 
* this takes a pointer to a buffer it loads an image to that buffer then returns that buffer 

# bwrite 
* takes a pointer to a buffer calculates the offset in memory using the block size and block num and the writes the data from the buffer to that spot 



## building

* Type make into the command line while you are in the same directory that the file is in and the make file will be created with the same name as the c file.

## files

* image.c 
* image.h 
* block.c 
* block.h 
* ctest.c 
* ctest.h 
* testfs.c 
* testfs.h


## data

* there is buffer that stores temporary dat to be transferred, a file to be read and a file to be written to. 



## functions

* image_open 
* this opens an image file or creates it if it does not exist  and truncates it 

* image close 
* closes the image file

* bread 
* this takes a pointer to a buffer it loads an image to that buffer then returns that buffer 

* bwrite 
* takes a pointer to a buffer calculates the offset in memory using the block size and block num and the writes the data from the buffer to that spot 




## notes

* i am quite confident that i did not do this properly so i will try to catch up for next week 