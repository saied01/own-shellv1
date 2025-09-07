#include "shell.h"

// WRAPPERS

// MAN getcwd => On success, these functions return a pointer to a string
// containing the pathname  of  the  current  working  directory.
void getcwd_wrapper(char *buf, size_t size) 
{
    if (NULL == getcwd(buf, size)) 
        perror("getcwd FAILED");
}


void *malloc_wrapper(size_t size) 
{
    void *ptr;

    if (size == 0)
        return NULL;
    ptr = malloc(size);
    if (!ptr)
    {
        perror(RED"malloc failed"RST);
        exit(EXIT_FAILURE);
    }
    return ptr;
}


void *realloc_wrapper(void *ptr, size_t size)
{
    void *new_ptr;

    new_ptr = realloc(ptr, size);
    if (!new_ptr && size == 0)
    {
        perror(RED"realloc failed"RST);
        exit(EXIT_FAILURE);
    }
    return new_ptr;
}






void printbanner() 
{
    printf(
        "███████╗██╗  ██╗███████╗██╗     ██╗    ██╗   ██╗ ██╗\n"
        "██╔════╝██║  ██║██╔════╝██║     ██║    ██║   ██║███║\n"
        "███████╗███████║█████╗  ██║     ██║    ██║   ██║╚██║\n"
        "╚════██║██╔══██║██╔══╝  ██║     ██║    ╚██╗ ██╔╝ ██║\n"
        "███████║██║  ██║███████╗███████╗███████╗╚████╔╝  ██║\n"
        "╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═══╝   ╚═╝\n"
    );
}