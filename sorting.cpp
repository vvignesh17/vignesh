/* Bubble sort code */
 
#include<stdio.h>//Vignesh 110117101
#include<stdlib.h>
 
//bubble sort using function
 
void bubble_sort(int [], int); //function definition
 
int main() {
    int array[100], n, c, d, swap;
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
 
    for (c = 0; c < n; c++)
        scanf("%d", &array);
 
    bubble_sort(array, n);
 
    printf("Sorted list in ascending order:\n");
 
    for (c = 0; c < n; c++)
        printf("%d\n", array);
 
    return 0;
}
 
void bubble_sort(int list[], int n) //function body
{
    int c, d, t;
 
    for (c = 0; c < (n - 1); c++) //outer loop
    {
        for (d = 0; d < n - c - 1; d++) //inner loop
        {
            if (list[d] > list[d + 1]) {
                /* Swapping */
 
                t = list[d]; //using temporary variable
                list[d] = list[d + 1];
                list[d + 1] = t;
            }
        }
    }
