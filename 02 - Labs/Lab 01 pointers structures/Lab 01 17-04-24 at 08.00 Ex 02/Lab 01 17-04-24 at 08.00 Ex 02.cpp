#include <stdio.h>   // for printf
#include <malloc.h>  // for malloc

// The mission: write a function that gets a pointer
// and relocates the original pointer it to a new memory location

// Attempt 2: passing a pointer by pointer (C style)
// The function gets a pointer by pointer
// and relocates it.
// The original pointer is changed
void ptrProc(int* *pp)
{
    *pp = (int*)malloc(sizeof(int));
    printf("pp = %p\n", *pp);
}

void main()
{
    int* ptr = NULL;
    printf("ptr = %p\n", ptr);

    int** ptrPtr = &ptr;
    ptrProc(ptrPtr);        // try to relocate ptr
    printf("After ptrProc(ptr) :\n");
    printf("ptr = %p\n", ptr);
}
