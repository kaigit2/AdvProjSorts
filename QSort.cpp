#include <stdio.h>
#include "QSort.h"

//int pivot = *(point + low);
//*low=*(point+low)
//*high=*(point+high)
void swap(int* swaplow, int* swaphigh) {
	int save = *swaphigh;
	*swaphigh = *swaplow;
	*swaplow = save;

}

int quicksorthelper(int* point, int nelements, int nsize, int(*compare)(int, int), int low, int high) {
	int pivot = *(point + low);
	int* left = (point + low) + 1;
	int* right = point + high;

	while (left <= right) {
		while ((left <= right) && (*left <= pivot)) {
			left++;
		}
		while ((left <= right) && (*right > pivot)) {
			right--;
		}
		if (left < right) {
			swap(left, right);
		}
	}
	swap(point + low, right);
	return right - point;//index of new pivot

}

int quicksort(int* point, int nelements, int nsize, int(*compare)(int, int), int low, int high) {
	if (low < high) {
		int i = quicksorthelper(point, nelements, sizeof(*point), compare, low, high);

		quicksort(point, nelements, sizeof(*point), compare, low, i - 1);
		quicksort(point, nelements, sizeof(*point), compare, i + 1, high);
	}

	return 0;
}
