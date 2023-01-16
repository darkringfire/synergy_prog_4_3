#include <iostream>
#define NMAX 100

int main() {
    int n;
    int arr[NMAX];
    do {
        printf("Enter number of items (1..%i):", NMAX);
        scanf("%i", &n);
    } while (n < 1 || n > NMAX);
    for (int i = 0; i < n; i++) {
        printf("Enter item %i:", i);
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %i = %i\n", i, arr[i]);
    }

    return 0;
}
