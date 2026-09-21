Used Claude Sonnet 5 medium. 6 Exchanges. roughly 2 hours of work with AI. Success rate is 94% (28/30). 
**Exchange 1** Explain differences of C and python/JS. 
**My Prompt:** Explain the differences between C and python/javascript
**Why I Asked:** This prompt was part of the instructions of part B of the Lab exercise
**AI Response:** C compiles to native machine code before running while python/java are interpreted at runtime. C performs much faster because it is low level and close to hardware, while Python and java are high level and have built in lists and objects. 
**Effectiveness:** Rating 3 because thers a lot of terminology I dont understand.
**What I Learned:** I learned C is not object oriented and that C ha sno runtime because compiled binary runs directly onto OS. 
**Follow-up Needed:** Yes, to simplify terms. 

**Exchange 2** Clarification of first exchange
**My Prompt** Please repeat this using more beginner friendly vocabulary
**Why I Asked:** Last exchange had too much vocabulary that went over my head to comprehend all information. 
**AI Response** In C you must manually manage memroy when needed and give it back when done, while in JS and Python it is done for you in the background. In C when you declare what type a variable is you cnat change it later, while in python/JS variables can hold any type, with JS having more flexibility. C lets you work with where in the memory something's stored when Python/JS never sees raw memory addresses. No classes in C, python has classes like C++ and JS has prototypes instead of classes and is similar. 
**Effectiveness** 5 because i actually understood all of the information this time
**What I learned** I leanred that C give you more power with the memory but with greater responsibility because messing the memory up leads to leaks or bugs, while in Javascript there is less risk but less power in the Memory. 
**Follow up** Not needed because I have achieved the clarification I desired. 

**Exchange 3** ASCII art generation techniques
**My Prompt** What are ASCII art generation techniques. 
**Why I Asked** Part of the AI explorations tab suggest i should learn, utilizing an AI tool, about ASCII art generation techniques
**AI Response** There is Image to ASCII conversion, Edge detection / structural ASCII, Dithering-based ASCII, Color ASCII, Font-based / template matching ASCII, Hand-drawn/generative ASCII, Video/animated ASCII.
**Effectiveness** 5, very effective perhaps even overly detailed description. I believe are interested in the hand drawn ASCII art. 
**What I Learned** I learned that there's actually a lot of depth to ASCII art and many ways to convert actual images to ASCII. I  already knew about the hand drawn ASCII art so it was very interesting to learn about the many other ways that ASCII can be implemented. 
**Follow Up needed** No follow up needed because I have explored to a satisfactory amount. 

**Exchange 4** Building Sine Wave with ASCII generator
**My Prompt** Considering this C code already in place: 
#include <stdio.h>
int main(){
    printf("Welcome to MTEC-353: Advanced Audio Programming!\n");
}
Please write C code to generate a sine wave at 262 hz and an ASCII art section displayed representing the waveform of the sine wave.
**Why I asked** This is part of the lab assignment and I do not know enough C code on my own to generate audio or figure out a way (other than manually designing) an ASCII representation of a sine wave. 
**AI Response** 
#include <stdio.h>
#include <math.h>

#define SAMPLE_RATE 8000
#define FREQUENCY   262.0
#define NUM_SAMPLES 200   // number of samples to display (about 6.5 periods)
#define PLOT_HEIGHT 21    // odd number so there's a clear center line (amplitude 0)

int main() {
    printf("Welcome to MTEC-353: Advanced Audio Programming!\n");

    double samples[NUM_SAMPLES];

    // Generate sine wave samples at 262 Hz
    for (int i = 0; i < NUM_SAMPLES; i++) {
        double t = (double)i / SAMPLE_RATE;
        samples[i] = sin(2.0 * M_PI * FREQUENCY * t);
    }

    printf("\nSine Wave at %.0f Hz (ASCII waveform):\n\n", FREQUENCY);

    // Build a 2D grid: rows = amplitude levels, cols = sample index
    char grid[PLOT_HEIGHT][NUM_SAMPLES];
    for (int r = 0; r < PLOT_HEIGHT; r++) {
        for (int c = 0; c < NUM_SAMPLES; c++) {
            grid[r][c] = ' ';
        }
    }

    int center = PLOT_HEIGHT / 2;

    // Plot each sample: map amplitude [-1, 1] to a row [0, PLOT_HEIGHT-1]
    for (int c = 0; c < NUM_SAMPLES; c++) {
        int row = center - (int)round(samples[c] * center);
        if (row < 0) row = 0;
        if (row >= PLOT_HEIGHT) row = PLOT_HEIGHT - 1;
        grid[row][c] = '*';
    }

    // Draw a horizontal zero-line for reference, without overwriting the wave
    for (int c = 0; c < NUM_SAMPLES; c++) {
        if (grid[center][c] == ' ') {
            grid[center][c] = '-';
        }
    }

    // Print the grid, row by row
    for (int r = 0; r < PLOT_HEIGHT; r++) {
        for (int c = 0; c < NUM_SAMPLES; c++) {
            putchar(grid[r][c]);
        }
        putchar('\n');
    }

    return 0;
}
**Effectiveness** This response was a 5 and very effective because not only it performed the task, but included explanations of why it was doing what it was doing so i can learn from the code. Also, taking your tip of typing it out instead of copying and pasting it helped me better engage with the material. 
**What I learned** I learned to include the math bank to perform operations in C. I also learned that all of the code went into the main function, which i am curious to know if that is how it will continue to work in the future. For example in python i would have many different functions not all contatined in one main function. I also saw some similarities to python with for loops and i++. 
**Follow up Needed** Yes, I need to ask some more questions about what char means, why the double in " (double)i / SAMPLE_RATE; " is in (), what a grid is for the ASCII, and why i was used for one for loop and c was used for the other 3 for loops as in " for (int c = 0; c < NUM_SAMPLES; c++) " 

**Exchange 5** Clarification on AI coding choices.
**My Prompt** several topics in are id like some clarification on - 
what char means, why the double in " (double)i / SAMPLE_RATE; " is in (), what a grid is for the ASCII, and why i was used for one for loop and c was used for the other 3 for loops as in " for (int c = 0; c < NUM_SAMPLES; c++) "
**Why I asked** To gain a better understanding of the coding choices i am unfamiliar with and to broaden my knolwedge of C. 
**AI Response** The char is a C type for a 1 byte character. A grid is declared a char because each cell in the grid [r][c] is a printable symbol. The () around double before declaring i is a clarification because it was before called as an int. The i vs c has no consequences it is just a choice. 
**Effectiveness** 5, excellent clarification and I learned a lot
**What I learned** I learned that grid is a char type because it holds 1 byte of characters, the grid [r] [c] is row and column, and that you may need to clarify variable types in (). 
**Follow up needed** none, resolved all questions in the prompt. There is a LOT of code here that i will eventually understand and little by little I will learn it and be able to apply it. 

**Exchange 6** Clarifications on compilation vs interpretation and its impact on audio
**My Prompt** Please clarify, in beginner friendly terminology, the differences between compilation and interpretation for audio and why this makes C a better programming language for audio
**Why I asked** I needed more clarification on the difference between compilation and interpretation from earlier and how specifically it makes C a more useful language for programming. 
**AI Response** Compiled code is translated into machine-readable binary and since audio handles thousands of measurments per second, the loss of speed from the Python or JS interpretation makes it impossible to measure audio well. Essentially the interpreted code is figuring out what to do every single line, which costs a lot of time. Direct memory control allows for better handling of audio buffering. 
**Effectiveness** 5, a wonderful explanation and helpd my thoughts click into place
**What I Learned** That the compliation matters a great deal to the fact that a sample rate is unbeleivably fast measruments, and C's predictable timing for execution makes it possible to have such a processing of digital audio. 
**Follow Up Needed** No, i achieved all the clarification I needed. 