#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menukar dua string
void swapString(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk mengurutkan array string menggunakan bubble sort
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swapString(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk mengurutkan array string menggunakan insertion sort
void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; ++i) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Fungsi untuk mengurutkan array string menggunakan selection sort
void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Fungsi untuk mengkloning array
void cloneArray(string source[], string destination[], int n) {
    for (int i = 0; i < n; ++i) {
        destination[i] = source[i];
    }
}

// Fungsi untuk menampilkan array string
void displayData(string arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    // Deklarasi Variabel
    string cities[] = {"Jakarta", "Malang", "Surabaya", "Bandung", "Garut", "Depok", "Tangerang"};
    int n = sizeof(cities) / sizeof(cities[0]);

    // Menampilkan Data Kota Awal
    cout << "Data Kota Awal:" << endl;
    displayData(cities, n);
    cout << "--------------------------------- \n";

    // Bubble Sort
    string bubbleSortedCities[n];
    cloneArray(cities, bubbleSortedCities, n);
    bubbleSort(bubbleSortedCities, n);
    cout << "\nData Kota setelah Bubble Sort:" << endl;
    displayData(bubbleSortedCities, n);
    cout << "--------------------------------- \n";

    // Insertion Sort
    string insertionSortedCities[n];
    cloneArray(cities, insertionSortedCities, n);
    insertionSort(insertionSortedCities, n);
    cout << "\nData Kota setelah Insertion Sort:" << endl;
    displayData(insertionSortedCities, n);
    cout << "--------------------------------- \n";

    // Selection Sort
    string selectionSortedCities[n];
    cloneArray(cities, selectionSortedCities, n);
    selectionSort(selectionSortedCities, n);
    cout << "\nData Kota setelah Selection Sort:" << endl;
    displayData(selectionSortedCities, n);
    cout << "--------------------------------- \n";

    return 0;
}
