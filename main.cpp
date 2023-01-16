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

    int j = 1;
    bool next = true;
    while (next) {
        next = false;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i+1]) {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                next = true;
            }
        }
        j++;
    }
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %i = %i\n", i, arr[i]);
    }

    return 0;
}
