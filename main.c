#include <stdio.h>
#include <string.h>
#include "compare.h"
#include "bubbleSort.h"
#include "test.h"

int main(){
    runAllTest();
    
    char *str1[] = {"mno", "abc", "qwe"};
    bubbleSort(str1, sizeof(str1) / sizeof(char *), sizeof(char *), compareString);
    for (int i = 0; i < sizeof(str1) / sizeof(char *); i++) {
        printf("%s\n", str1[i]);
    }
    return 0;
}///