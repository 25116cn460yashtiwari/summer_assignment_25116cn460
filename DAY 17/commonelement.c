#include <stdio.h>

int main() {
    int arr1[50], arr2[50], common[50];
    int size1, size2, i, j, k = 0;
    int found;

    // Input number  of first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    // Input numvber of first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find common elements
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
                // Check if already added
                found = 0;
                for(int m = 0; m < k; m++) {
                    if(common[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    common[k++] = arr1[i];
                }
            }
        }
    }

    // result common elements
    if(k == 0) {
        printf("No common elements.\n");
    } else {
        printf("Common elements are:\n");
        for(i = 0; i < k; i++) {
            printf("%d ", common[i]);
        }
    }

    return 0;
}
