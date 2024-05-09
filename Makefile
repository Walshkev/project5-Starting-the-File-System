testfs: testfs.o libvvsfs.a 
	gcc $^ -o $@

testfs.o: testfs.c image.h block.h ctest.h 
	gcc -Wall -Wextra  -c $<

image.o :image.c
	gcc -Wall -Wextra -c $<

block.o: block.c
	gcc -Wall -Wextra -c $<

libvvsfs.a : image.o block.o 
	ar rcs $@ $^



.PHONY: clean pristine

clean: 
	rm -f *.o

pristine: clean
	rm testfs


