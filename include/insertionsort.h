#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

unsigned t4, t5;

double insertionSort(int arr[], int n)
{
    t4=clock();
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    t5 = clock();
       double time = (double(t5-t4)/CLOCKS_PER_SEC);
    return time;
}

#endif // INSERTIONSORT_H
