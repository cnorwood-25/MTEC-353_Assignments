#include <stdio.h>
#include <math.h> // AI

#define SAMPLE_RATE 8000 // AI
#define FREQUENCY   262.0 // AI
#define NUM_SAMPLES 200   // number of samples to display (about 6.5 periods) // AI
#define PLOT_HEIGHT 21    // odd number so there's a clear center line (amplitude 0) // AI

int main() {
    printf("Welcome to MTEC-353: Advanced Audio Programming!\n");
    double samples[NUM_SAMPLES]; // AI

    // Generate sine wave samples at 262 Hz
    for (int i = 0; i < NUM_SAMPLES; i++) { // AI
        double t = (double)i / SAMPLE_RATE; // AI
        samples[i] = sin(2.0 * M_PI * FREQUENCY * t); // AI
    }

    printf("\nSine Wave at %.0f Hz (ASCII waveform):\n\n", FREQUENCY); // AI

    // Build a 2D grid: rows = amplitude levels, cols = sample index
    char grid[PLOT_HEIGHT][NUM_SAMPLES]; // AI
    for (int r = 0; r < PLOT_HEIGHT; r++) { // AI
        for (int c = 0; c < NUM_SAMPLES; c++) { // AI
            grid[r][c] = ' '; // AI
        }
    }

    int center = PLOT_HEIGHT / 2; // AI

    // Plot each sample: map amplitude [-1, 1] to a row [0, PLOT_HEIGHT-1]
    for (int c = 0; c < NUM_SAMPLES; c++) { // AI
        int row = center - (int)round(samples[c] * center); // AI
        if (row < 0) row = 0; // AI
        if (row >= PLOT_HEIGHT) row = PLOT_HEIGHT - 1; // AI
        grid[row][c] = '*'; // AI
    }

    // Draw a horizontal zero-line for reference, without overwriting the wave
    for (int c = 0; c < NUM_SAMPLES; c++) { // AI
        if (grid[center][c] == ' ') { // AI
            grid[center][c] = '-'; // AI
        }
    }

    // Print the grid, row by row
    for (int r = 0; r < PLOT_HEIGHT; r++) { // AI
        for (int c = 0; c < NUM_SAMPLES; c++) { // AI
            putchar(grid[r][c]); // AI
        }
        putchar('\n'); // AI
    }

    return 0; // AI
}
