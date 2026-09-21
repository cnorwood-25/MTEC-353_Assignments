//bang
// Start with this template 
#include <stdio.h> 

int main() { 
    printf("Memory Detective Investigation\\n"); 
    printf("================================\\n"); 
    
    // Your code will go here 
    char c = 'A'; 
    int x = 5; 
    float y = 3.14; 
    double z = 3.14159265359; 
    short s = 100; 
    long l = 1000000;
    printf("%zu\n", sizeof(z));
    return 0; 
}