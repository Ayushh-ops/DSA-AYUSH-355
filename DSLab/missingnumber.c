#include <stdio.h>
int main() {
    int n = 5;
    int arr[] = {1, 2, 4, 5}; 
    int total_sum = n * (n + 1) / 2;
    int arr_sum = 0;
    for (int i = 0; i < n - 1; i++)
     {
        arr_sum += arr[i];
    }
    int missing = total_sum - arr_sum;
    printf("Missing number is: %d\n", missing);
    return 0;
}
