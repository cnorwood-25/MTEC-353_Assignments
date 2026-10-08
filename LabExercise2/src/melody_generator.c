#include <stdio.h>
#include <stdlib.h> //AI
#include <time.h> //AI


enum Scale {MAJOR, MINOR, PENTATONIC};
struct Note 
{
    unsigned char pitch; 
    float duration;
    unsigned char velocity;
};

typedef struct Note Note;

int major_scale [] = {0, 2, 4, 5, 7, 9, 11};
int minor_scale [] = {0, 2, 3, 5, 7, 8, 10};
int pentatonic_scale [] = {0, 2, 4, 7, 9};

void generate_melody(Note* melody, int length, enum Scale scale_type, int root_note){

    
    for (int i = 0; i < length; i++ ){
            int r = rand(); // AI
            (melody+i)->pitch = r % 7;   //ai suggested the + i in melody
            int *degree = major_scale[melody->pitch];   //ai said to use int isntead of char

        }
}

int main(){
    srand(time(NULL)); // AI
    int root_note, length;
    printf("Which Key?"); // AI fixed incorrect usage of scanf
    scanf("%s", &root_note);
    printf("Enter melody length 1-16?");
    scanf("%d", &length);

    if (length > 16 || length < 0){
        printf("The melody does not fit bounds of 0-16");
        return 1; //ai incldued this to end porgram if wrong length is entered
    }

    Note melodicSequence[16];
    // generate_melody();
    for (int i = 0; i < length; i++){ //AI
        printf("%d\n", melodicSequence[i].pitch); //AI
       }   
    return 0;
    //     Note midinote = {64, 1.5, 100};

    // printf("%d\n", midinote.pitch);
}
