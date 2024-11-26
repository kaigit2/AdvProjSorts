#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "QSort.h"
#include <time.h>
#include <stdlib.h>
#include "Bubble.h"
#include "insertion.h"

int compare(int a, int b) {
    return (a > b) - (a < b);
}

void printarr(int* arr, int size) {
    int i;
    for (i = 0; i < size - 1; i++) {
        printf("%d, ", *(arr + i));
    }
    printf("%d", *(arr + i));
    printf("\n");
}

int main(int argc, char* argv[]) {
    srand(time(NULL)); 
    printf("which project would you like to run?: ");
    int n = 3;
    //scanf_s("%d", &n);
    switch (n) {
    case 1://quicksort
    {
        const int arrsz = 5'000'000;
        int *quicklist = (int*)malloc(arrsz * sizeof(int));
        quicklist[0] = 0;
        for (int i = 1; i < arrsz; i++) {
            quicklist[i]=rand()%1'000'000;
            //quicklist[i]=quicklist[i-1]+1;
        }
        int inithigh = arrsz - 1;
        quicksort(quicklist, arrsz, sizeof(quicklist[0]), compare, 0, inithigh);
        free(quicklist);

        //}
        break;
    }

    case 2:
    {
        const int arrsz = 1'000'000;
        int* arr = (int*)malloc(arrsz * sizeof(int));
        arr[0] = 1'000'000;
        for (int i = 1; i < arrsz; i++) {
            arr[i] = arr[i-1] - (rand() % 100);
        }
        //printarr(arr, arrsz);
        bubbleSort(arr, arrsz);
        printf("\n\n\n\n\n\n");
        //printarr(arr, arrsz);
        free(arr);
        break;
    }
    case 3:
    {
        const int arrsz = 1'000'000;
        int* arr = (int*)malloc(arrsz * sizeof(int));
        arr[0] = 0;
        for (int i = 1; i < arrsz; i++) {
            arr[i] = rand() % 1'000'000;
        }
        //printarr(arr, arrsz);
        insertion(arr, arrsz);
        printf("\n\n\n\n");
        //printarr(arr,arrsz);
        break;
    }

    default:
        printf("\n - that is not a function number -");
    }
    return 0;
}
