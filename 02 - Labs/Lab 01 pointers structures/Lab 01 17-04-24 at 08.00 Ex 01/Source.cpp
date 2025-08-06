#include <stdio.h>   // for printf
#include <malloc.h>  // for malloc

// The mission: write a function that gets a pointer
// and relocates the original pointer it to a new memory location

// Attempt 1 (failed): passing a pointer by value
// The function gets a pointer by value
// and attempts to relocate it.
// The original pointer remains unchanged
void ptrProc(int* pp)
{
    pp = (int*)malloc(sizeof(int));
    printf("pp = %p\n", pp);
}

void main()
{
    int* ptr = NULL;
    printf("ptr = %p\n", ptr);
    ptrProc(ptr);        // try to relocate ptr
    printf("After ptrProc(ptr) :\n");
    printf("ptr = %p\n", ptr);
}
