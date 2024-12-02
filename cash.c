// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int arr1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int rupees;

    printf("Enter the amount in rupees: \n");
    scanf("%d", &rupees);

    for (int i = 0; i < 9; i++) {
        if (arr[i] <= rupees) {
            arr1[i] = rupees / arr[i];
            rupees = rupees - (arr[i] * arr1[i]);
        }
    }

    for (int i = 0; i < 9; i++) {
        if (arr1[i] > 0) {
            if (arr[i] >= 10) {
                // Notes
                if (arr1[i] == 1) {
                    printf("One %d rupee note\n", arr[i]);
                } else {
                    printf("%d %d rupee notes\n", arr1[i], arr[i]);
                }
            } else {
                // Coins
                if (arr1[i] == 1) {
                    printf("One %d rupee coin\n", arr[i]);
                } else {
                    printf("%d %d rupee coins\n", arr1[i], arr[i]);
                }
            }
        }
    }

    return 0;
}
