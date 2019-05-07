#include "insertion_sort.h"
#include<iostream>

namespace insertion
{

void copy_array(int a[], int i_begin, int i_end, int b[])
{
    for(int k = i_begin; k < i_end; k++)
        b[k] = a[k];
}

void sort_r(int a[],int n)
{
/**
 * pseudo code from wikipedia
function insertionSortR(array A, int n)
     if n>0
        insertionSortR(A,n-1)
        x ← A[n]
        j ← n-1
        while j >= 0 and A[j] > x
            A[j+1] ← A[j]
            j ← j-1
        end while
        A[j+1] ← x
     end if
 end function
 */
	if(n>0)
	{
        sort_r(a,n-1);
        int x = a[n];
        int j = n - 1;
        while(j >=0 && a[j] > x)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = x;
	}
}

void sort(int a[], int n)
{
    /**
i ← 1
while i < length(A)
    x ← A[i]
    j ← i - 1
    while j >= 0 and A[j] > x
        A[j+1] ← A[j]
        j ← j - 1
    end while
    A[j+1] ← x
    i ← i + 1
end while
     */

	int i = 1;
	while(i < n)
    {
        int x = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > x)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = x;
        i++;
	}
}

};
