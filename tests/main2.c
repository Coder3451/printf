#include <stdio.h>
#include "main.h"  

int main() {
   
    int count;

    
    count = _printf("Character: %c\n", 'A');
    printf("Expected: Character: A\n");
    printf("Count: %d (Expected: 13)\n\n", count);

    
    count = _printf("String: %s\n", "Hello, World!");
    printf("Expected: String: Hello, World!\n");
    printf("Count: %d (Expected: 20)\n\n", count);

    
    count = _printf("Integer: %d\n", 12345);
    printf("Expected: Integer: 12345\n");
    printf("Count: %d (Expected: 16)\n\n", count);

    
    count = _printf("Negative integer: %d\n", -6789);
    printf("Expected: Negative integer: -6789\n");
    printf("Count: %d (Expected: 24)\n\n", count);

    count = _printf("Percentage: %%\n");
    printf("Expected: Percentage: %%\n");
    printf("Count: %d (Expected: 15)\n\n", count);

    count = _printf("Mix: %c %s %d %%\n", 'X', "test", 42);
    printf("Expected: Mix: X test 42 %%\n");
    printf("Count: %d (Expected: 20)\n\n", count);

    return 0;
}

