#include <stdio.h>
int main(){
    printf("Hello,\n\nWorld\n");
}
float add(float a, float b){
    return a + b ;
}
// dont have to call main like in python
// main function means no return statement, as it is unnecessary
// Clang makes it machine readable
//./a.out is to run the compiled c code
// ../ is parent directory and ./ is current directory
// last three r shit r-x means that you can run it 
// can use -o to rename 