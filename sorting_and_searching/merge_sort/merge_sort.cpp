#include "merge_sort.h"


void copy_array(int a[], int i_begin, int i_end, int b[])
{
    for(int k = i_begin; k < i_end; k++)
        b[k] = a[k];
}

//  Left source half is a[ i_begin:i_middle-1].
// Right source half is a[i_middle:i_end-1   ].
// Result is            B[ i_begin:i_end-1   ].
void merge(int a[], int i_begin, int i_middle, int i_end, int b[])
{
    int i = i_begin; 
    int j = i_middle;
 
    // While there are elements in the left or right runs...
    for (int k = i_begin; k < i_end; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < i_middle && (j >= i_end || a[i] <= a[j])) {
            b[k] = a[i];
            i = i + 1;
        } else {
            b[k] = a[j];
            j = j + 1;
        }
    }
}

// Sort the given run of array a[] using array b[] as a source.
// i_begin is inclusive; i_end is exclusive (a[i_end] is not in the set).
void split_merge(int b[], int i_begin, int i_end, int a[])
{
    if(i_end - i_begin < 2)                       // if run size == 1
        return;                                 //   consider it sorted
    // split the run longer than 1 item into halves
    int i_middle = (i_end + i_begin) / 2;              // i_middle = mid point
    // recursively sort both runs from array a[] into b[]
    split_merge(a, i_begin,  i_middle, b);  // sort the left  run
    split_merge(a, i_middle,    i_end, b);  // sort the right run
    // merge the resulting runs from array b[] into a[]
    merge(b, i_begin, i_middle, i_end, a);
}

// Array a[] has the items to sort; array b[] is a work array.
void sort(int a[], int n)
{
    int* b = new int[n];
    copy_array(a, 0, n, b);          // duplicate array a[] into b[]
    split_merge(b, 0, n, a);        // sort data from b[] into a[]
}

