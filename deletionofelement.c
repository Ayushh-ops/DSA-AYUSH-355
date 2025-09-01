#include <stdio.h>
int main() {
    int arr[6] = {22, 34, 12, 3, 45, 50}; 
    int n = 6;  
    int pos;
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n)
     {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i = pos; i < n - 1; i++)
     {
        arr[i] = arr[i + 1];
    }
    n--;  
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
