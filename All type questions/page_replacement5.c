#include <stdio.h>
#include <stdbool.h>

#define MAX_FRAMES 3 

bool isPagePresent(int page, int frame[], int frameSize) {
    for (int i = 0; i < frameSize; i++) {
        if (frame[i] == page)
            return true;
    }
    return false;
}

int findOldestPageIndex(int page[], int n) {
    int oldestIndex = 0;
    int oldestPage = page[0];

    for (int i = 1; i < n; i++) {
        if (page[i] < oldestPage) {
            oldestPage = page[i];
            oldestIndex = i;
        }
    }
    return oldestIndex;
}

void fifo(int pages[], int n, int frameSize) {
    int frame[frameSize]; 
    int frameIndex = 0;
    for (int i = 0; i < frameSize; i++) {
        frame[i] = -1;
    }

    int pageFaults = 0;

    for (int i = 0; i < n; i++) {
        if (!isPagePresent(pages[i], frame, frameSize)) {
            frame[frameIndex] = pages[i];
            frameIndex = (frameIndex + 1) % frameSize; 
            pageFaults++;
        }

        printf("Frame: ");
        for (int j = 0; j < frameSize; j++) {
            if (frame[j] == -1)
                printf("- ");
            else
                printf("%d ", frame[j]);
        }
        printf("\n");
    }

    printf("Total Page Faults: %d\n", pageFaults);
}

int main() {
    
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};

    int n = sizeof(pages) / sizeof(pages[0]); 
    int frameSize = MAX_FRAMES; 

    fifo(pages, n, frameSize);

    return 0;
}