
#include <stdio.h>

void search(int marks[], int n);
void sort(int marks[], int n);
void average(int marks[], int n);
void highest(int marks[], int n);

int main() {

    int marks[100], n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of students:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    search(marks, n);
    sort(marks, n);
    average(marks, n);
    highest(marks, n);

    return 0;
}

// Search marks
void search(int marks[], int n) {

    int key, found = 0;

    printf("\nEnter marks to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (marks[i] == key) {
            printf("Marks found at student %d\n", i + 1);
            found = 1;
        }
    }

    if (found == 0)
        printf("Marks not found\n");
}

// Sort marks in ascending order
void sort(int marks[], int n) {

    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (marks[i] > marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("\nSorted marks: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
}

// Calculate average
void average(int marks[], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    printf("\nClass Average = %.2f", (float)sum / n);
}


void highest(int marks[], int n) {

    int max = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }

    printf("\nHighest Marks = %d\n", max);
}
