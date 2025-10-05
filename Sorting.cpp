#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Display function
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nChoose Sorting Algorithm:\n";
    cout << "1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\nChoice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(arr, n);
            cout << "Sorted using Bubble Sort: ";
            break;
        case 2:
            selectionSort(arr, n);
            cout << "Sorted using Selection Sort: ";
            break;
        case 3:
            insertionSort(arr, n);
            cout << "Sorted using Insertion Sort: ";
            break;
        default:
            cout << "Invalid Choice!";
            return 0;
    }

    display(arr, n);
    return 0;
}

/*OUTPUT
Enter number of elements: 5
Enter elements: 1 2 3 4 5

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
Choice: 1
Sorted using Bubble Sort: 1 2 3 4 5 



Enter number of elements: 5
Enter elements: 5 4 3 2 1

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
Choice: 2
Sorted using Selection Sort: 1 2 3 4 5


Enter number of elements: 5
Enter elements: 5 4 3 2 1

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
Choice: 3
Sorted using Insertion Sort: 1 2 3 4 5 
*/
