#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/* Struct for singly linked list */
typedef struct list_s
{
    char *str;
    int len;
    struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
/* Add more function prototypes here if needed */

#endif /* LISTS_H */
