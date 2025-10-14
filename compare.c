#include <stdio.h>
#include <string.h>

int compareInt(void *a, void *b) { 
    return *(int *)a - *(int *)b; 
}

int compareChar(void *a, void *b) { 
    return *(char *)a - *(char *)b; 
}

int compareDouble(void *a, void *b) { 
    return *(double *)a - *(double *)b; 
}

int compareString(void *a, void *b) { 
    return strcmp(*(char **)a, *(char **)b); 
}

