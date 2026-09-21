//week two baby
//variable kinda fire ways of storing data
// long, short, long long are ways of declaring int in C
// variables hace name, type and value
//double is shorthand for double float, float has 4 bits and double has 8 bits. 
//char is 1 byte and smallest data type, usually stores character data. 
// 1 byte is 8 bits 128 all ascii character
//int 4 bytes, long is 8 bytes, long long is 16 bytes. Float 4 byte double 8 byte. 
#include <stdio.h>
// int add(int a, int b);
int main(){
    int number = 123;
    float z = 1.23f; //f tells the compiler that its floating point to conserve memory to clarify its not a double
    double pi = 3.14;
    char c = 'a'; //single qutoe is one character
    char *str = "Hello, World";

    printf("%i, %f, %f, %c, %s\n", number, z, pi, c, str); //% to print and the first letter of the data type, double number can be printed in b for binary d for decimal x for hexidecimal 
    // %lf means long
    float test = 5/2.0; //  incorrect way int test = 5/2; make either one floating point
    printf("%f\n", test);

    // float x = 10.3;
    // int y;
    // y = (int)x;

    int x = 10;
    int y = 20;
    float E;
    E = (float) x / y;
    printf("%f\n", E);
    // this will print 10 if you print y if no (int)
    int Userinput;
    printf("Type in a number\n");
    scanf("%i\n", &Userinput);
    printf("the number you typed in is: %i\n", Userinput); //specify what input you expect and where to assign it gotta define the variable before

    int midiNote = 64; //midi note range is 0-127
    if(midiNote <= 127 && midiNote >= 0){ // || is or and && is and
        printf("MIDI note is in the range\n");
    }
    else {
        printf("MIDI note is out of the range\n");
    }

    if(midiNote < 12){ // || is or and && is and
        printf("MIDI note is in the first octave\n");
    }
    else if(midiNote < 24) {
        printf("MIDI note is in the second octave\n");
    }
    else if(midiNote < 36){
        printf("Midi note is in the third octave\n");
    }
    else {
        printf("Midi note is higher than the 3rd octave\n");
    }

    for (int i =0; i<10; i++){ //count from 0 to ten -- is count down
        printf("%i\n", i);
    } 
    int count = 0;
    while (count < 5){
        printf("%d\n", count);
        count ++ ;
    }

    // int add(int a, int b) {
    //     return a + b;
    // } //put this before main

    // printf("%i\n", add(a; 10, b;20));
    // undeclared variables exist if you declare the inside of a function
    //local varaible is usable to the function, no one outside can access it. 
    //outisde of the function is a global variable.
    // void for functions that dont return anything. 
    //local variable takes precedence over global. 
    //Array have a fixed size and are accessed from their index point, 8th element is at positon 7 start from 0
    int data[] = {[0] = 1, [1]=2, [2] =3 }; //size remains fixed in thearray
    int list2[3] = {1 , 2 , 3 , 4};
    data[3] = 4;  //dont do it like that cus it may not work on other peoples computers
    for (int i = 0; i<3; i ++){
        printf("%i\n", data[i]);
    }
    data[3] = 4;
    //cant add to data
    //int*arr for passing arrays to func
    // int arr[10]
    //int arr[]
    // void printArrayWithUnsizedArray(int arr[]){
    //     for(int i = 0; i <10; i ++){
    //         printf("%i\n", arr[i]);
    //     }
    // }
    // in main
    // printArrayWithUnsizedArray(arr: data);
    char name[] = "Audio";
    char name2[] ={ [0] = 'a', [1]= 'u', [2] = '\0'}; //' is for char " is string
}

//for division in c, it defualts to not floating point. 
// you can go from int = number to number = A because each character can turn into an int value. 
// casting operator converts one data type to another
// 0 is false and 1 is true for c, anything >0 is true