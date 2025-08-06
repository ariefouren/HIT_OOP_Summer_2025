#include <stdio.h>   // for printf
#include <malloc.h>  // for malloc

// The mission: write a function that gets a pointer
// and relocates the original pointer it to a new memory location

// Attempt 3: passing a pointer by reference (C++ style, simple)
// The function gets a pointer by reference
// and relocates it.
// The original pointer is changed
void ptrProc(int* &rp)
{
    rp = (int*)malloc(sizeof(int));
    printf("pp = %p\n", rp);
}

void main()
{
    int* ptr = NULL;
    printf("ptr = %p\n", ptr);

    ptrProc(ptr);        // try to relocate ptr
    printf("After ptrProc(ptr) :\n");
    printf("ptr = %p\n", ptr);
}
