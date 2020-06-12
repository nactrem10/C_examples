#include <stdio.h>

int main()
{

    // Creating arrays of processes and empty blocks.

    int processes[5] = {172, 138, 278, 102, 17}, blocks[6] = {300, 200, 200, 100, 650, 150};

    // Allocating blocks for processes

    for (int i = 0; i < sizeof(processes) / sizeof(processes[0]); i++)
    {

        // Finding the index of biggest element in blocks
        int maxIndex = 0;
        for (int j = 1; j < sizeof(blocks) / sizeof(blocks[0]); j++)
        {
            // Checking if the block is the biggest and process can fit
            if (blocks[j] > blocks[maxIndex] && processes[i] <= blocks[j])
            {
                maxIndex = j;
            }
        }

        // Setting the new remaining of selected block
        blocks[maxIndex] -= processes[i];

        // Printing the result of the current process
        printf("Process %d fit to block %d\n", i, maxIndex);
        printf("Block %d, remaining size: %d\n", maxIndex, blocks[maxIndex]);
        printf("----------------------------------------------\n");
    }

    return 0;
}