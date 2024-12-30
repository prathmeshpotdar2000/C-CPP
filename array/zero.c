#include<stdio.h>
#include<stdlib.h>

int main() {
    int a[5], count = 0;
    
    printf("\nEnter elements of an array: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            count++;
        }
    }
    
    int temp, original_count = count; // Store the original count of zeros
    for (int i = 0; i < 5; i++) {
        if (a[i] == 0) {
            temp = a[i];
            for (int j = i; j < 4 - count + original_count; j++) {
                a[j] = a[j + 1];
            }
            a[4 - count + original_count] = temp;
            count--;
            i--; // Adjust i to recheck the current position for another zero
        }
    }
    
    printf("\nArray after moving zeros to the end: ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    return 0;
}
