#include <stdio.h>

int checkTilesFit(int plot_width, int plot_length, int tile_width, int tile_length)
{
    // Your Code for task 1 starts here
    return -1;
    // Your Code for task 1 ends here
}

int calculateTiles(int plot_width, int plot_length, int tile_width, int tile_length)
{
    // Your Code for task 2 starts here
    return -1;
    // Your Code for task 2 ends here
}

void test1(int arr[][5], int size)
{
    printf("\n\nTask 1 Results\n\n");
    int passed = 0;
    int failed = 0;
    char val;
    for (int i = 0; i < size; i++)
    {
        val = checkTilesFit(arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
        if ((val == arr[i][4]))
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n");
            printf("Tile Width = %d\tTile Length = %d\n", arr[i][2], arr[i][3]);
            printf("Plot Width = %d\tPlot Length = %d\n", arr[i][0], arr[i][1]);
            if (arr[i][4] == 1)
            {
                printf("Expected = 1\n");
                printf("Result = 0");
            }
            else
            {
                printf("Expected = 0\n");
                printf("Result = 1");
            }
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][5], int size)
{
    printf("\n\nTask 2 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for (int i = 0; i < size; i++)
    {
        val = calculateTiles(arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
        if (val == arr[i][4])
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n");
            printf("Tile Width = %d\tTile Length = %d\n", arr[i][2], arr[i][3]);
            printf("Plot Width = %d\tPlot Length = %d\n", arr[i][0], arr[i][1]);
            printf("Expected = %d\n", arr[i][4]);
            printf("Result = %d\n", val);
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

int main()
{
    int arr1[][5] = {{2, 3, 4, 0, 0},
                     {2, 3, 0, 4, 0},
                     {2, 0, 1, 2, 0},
                     {0, 1, 2, 3, 0},
                     {0, 0, 0, 0, 0},
                     {4, 3, 2, 1, 1},
                     {3, 3, 2, 1, 0},
                     {4, 3, 2, 2, 0},
                     {5, 3, 3, 1, 1},
                     {4, 3, 1, 2, 1},
                     {4, 3, 2, 1, 1},
                     {4, 3, 12, 1, 0},
                     {3, 3, 2, 1, 0},
                     {4, -3, 2, -1, 0}};
    int arr2[][5] = {{2, 3, 4, 0, 0},
                     {2, 3, 0, 4, 0},
                     {2, 0, 1, 2, 0},
                     {4, 3, 1, 2, 6},
                     {4, 3, 2, 1, 6},
                     {4, 3, 12, 1, 0},
                     {3, 3, 2, 1, 0},
                     {5, 4, 2, 1, 10},
                     {4, 4, 4, 4, 1},
                     {8, 4, 2, 2, 8},
                     {100, 100, 50, 50, 4}};
    test1(arr1, 14);
    test2(arr2, 11);
    return 0;
}
