#include <stdio.h>

int main()
{
    int arr[100];          // array
    int n;                 // current size of array
    int i;
    int insertPos, deletePos;
    int insertValue;

    // Step 1: Read size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Read elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Step 3: Insert element
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &insertPos);

    printf("Enter element to insert: ");
    scanf("%d", &insertValue);

    // Shift elements RIGHT to make space
    for (i = n; i >= insertPos; i--)
        arr[i] = arr[i - 1];

    // Insert the element
    arr[insertPos - 1] = insertValue;
    n++;   // increase size

    // Step 4: Delete element
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &deletePos);

    // Shift elements LEFT to remove element
    for (i = deletePos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;   // decrease size

    // Step 5: Display final array
    printf("Final array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
