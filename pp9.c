#include <stdio.h>

// Funktion zur Berechnung der Summe aller Elemente in einem Array
int summeArray(int arr[], int size) {
    int summe = 0;
    for (int i = 0; i < size; i++) {
        summe += arr[i];
    }
    return summe;
}

int main() {
    // Beispiel-Array
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Aufruf der summeArray-Funktion
    int summe = summeArray(array, size);

    // Ausgabe der Summe
    printf("Die Summe der Array-Elemente ist: %d\n", summe);

    return 0;
}
