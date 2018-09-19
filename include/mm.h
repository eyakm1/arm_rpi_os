#ifndef	_MM_H
#define	_MM_H

#define PAGE_SHIFT	 		12
#define TABLE_SHIFT 			9
#define SECTION_SHIFT			(PAGE_SHIFT + TABLE_SHIFT)

#define PAGE_SIZE   			(1 << PAGE_SHIFT)	
#define SECTION_SIZE			(1 << SECTION_SHIFT)	

#define LOW_MEMORY              	(2 * SECTION_SIZE)

#include <stddef.h>

void *memzero(void *src, size_t size);

void *memcpy(void *dst, const void *src, size_t size);

void *memmove(void *dst, const void *src, size_t size);

void *memset(void *src, int fill, size_t size);

void *malloc(int size); // Not Implemented

#endif

#endif  /*_MM_H */
