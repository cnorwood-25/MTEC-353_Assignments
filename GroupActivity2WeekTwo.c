#include <stdio.h>
#include <math.h>
 int conversion(int Userinput){
        int a = 440 * 2^((Userinput-69)/12);
        return a ;
    }
int main()
{
    int midi_note;
    char note_names[12][3] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    int Userinput ;
    printf("MIDI Note Analyzer\n");
    printf("==================\n");
    printf("Enter MIDI note (0-127): "); 
    scanf("%d", &Userinput);
    int a;
   
    int answer = conversion(Userinput) % 12;
    printf("%i\n", answer);

    return 0; 
}