#include <stdio.h>
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
    scanf("Which Key?", &root_note);
    scanf("How long is the melody?", &length);

}

int main(){
    
    Note midinote = {64, 1.5, 100};

    printf("%d\n", midinote.pitch);
}
