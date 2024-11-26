#pragma once
#include <stdio.h>

int quicksort(int* point, int nelements, int nsize, int(*compare)(int, int), int low, int high);
