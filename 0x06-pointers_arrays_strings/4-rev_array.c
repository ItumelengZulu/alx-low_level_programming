/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
    int left = 0;
    int right = n - 1;
    int temp;

    while (left < right) {
        /* Swap elements at left and right indices */
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        /* Move the indices towards each other */
        left++;
        right--;
    }
}

