#include "selection_sort.h"
#include<iostream>

void copy_array(int a[], int i_begin, int i_end, int b[])
{
    for(int k = i_begin; k < i_end; k++)
        b[k] = a[k];
}

// Array a[] has the items to sort; array b[] is a work array.
void sort(int a[], int n)
{
    /* a[0] to a[n-1] is the array to sort */
    
    /* advance the position through the entire array */
    /*   (could do j < n-1 because single element is also min element) */
    for (int j = 0; j < n-1; j++)
    {
        /* find the min element in the unsorted a[j .. n-1] */
  
      /* assume the min is the first element */
      int i_min = j;
      /* test against elements after j to find the smallest */
      for (int i = j+1; i < n; i++)
      {
          /* if this element is less, then it is the new minimum */
          if (a[i] < a[i_min])
          {
              /* found new minimum; remember its index */
              i_min = i;
          }
      }
  
      if (i_min != j) 
      {
          std::swap(a[j], a[i_min]);
      }
 }
}
