#include <stdio.h>
#include <math.h>
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

double midi_to_frequency(int midi) {
    return 440.0 * pow(2.0, (midi - 69) / 12.0);
}

void generate_melody(Note *melody, int length, enum Scale scale_type, int root_note){
    int *scale;
    int size;
    float durations[] = {0.25, 0.5, 1.0, 2.0};

    switch (scale_type){  //ai
        case MAJOR: scale = major_scale; size = 7; break; //ai
        case MINOR: scale = minor_scale; size = 7; break; //ai
        case PENTATONIC: scale = pentatonic_scale; size = 5; break;  //ai
    }
    
    for (Note *p = melody; p < melody + length; p++){ //ai
            int degree = rand() % size; 
            p->pitch = root_note + scale[degree]; 
            p->duration = durations[rand()%4];
            p->velocity = 64 + rand()% 64;

        }
}

void print_rhythm(float duration) { // ai
    int units = (int)(duration * 4);         //ai, basically turnitng 0.25 through 1 into 2.0 througb 8 for display
    printf("#");   //ai
    for (int i = 1; i < units; i++){ //ai
        printf("-"); //ai
        
    }   //ai
}

int main(void){
    srand(time(NULL)); // AI
    int choice, root_note, length;

    printf("Enter melody length 4-16\n");
    scanf("%d", &length);

    if (length > 16 || length < 4){
        printf("The melody does not fit bounds of 4-16");
        return 1; //ai incldued this to end program. I learned that this is telling teh computer essentially how many errors the code endoucntered, any non 0 integer gets evaluatedas true there is an error and ends it. 
    }

    printf("Choose scale: 0 = Major, 1 = Minor, 2 = Pentatonic: ");
    scanf("%d", &choice);
    if (choice < 0 || choice > 2) { 
        printf("Invalid scale.\n");
        return 1;
    }
    
    printf("Root note MIDI number (C=60, D=62, E=64, F=65, G=67, A=69, B=71): ");  //ai interfacing suggestion to have the user input midi instead of C or D, etc..
    scanf("%d", &root_note);
    if (root_note < 0 || root_note > 100) {
        printf("Invalid root note.\n");
        return 1;
    }
    enum Scale scale_type = (enum Scale)choice; // ai

    Note melody[16];
    generate_melody(melody, length, scale_type, root_note);
    
    printf("\n Here is the melody in the form note, frequency, and duration in beats:\n");
    for (int i = 0; i < length; i++){ //AI
         printf("%-2d %-6d %-9.2f %-6.2f ",    //ai formatting suggestion, basically goes left to write and the -2 is a minimum character width allocation, with the dots in floating point being the rounding. 
               i + 1, (melody + i)->pitch,
               midi_to_frequency((melody + i)->pitch),
               (melody + i)->duration);
        print_rhythm((melody+i)->duration);
        printf("\n");
       }   
    
    return 0;
   }
