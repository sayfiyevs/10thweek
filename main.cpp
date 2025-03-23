#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>
using namespace std;
/*problem 1
int main() {
    int n, sum = 0;

    cout << "Enter the number of integers: ";
    cin >> n;

    int arr[n]; // Array to store n integers

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each number to sum
    }

    cout << "Sum = " << sum << endl;

    return 0;
}*/
/*problem 2
float calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<float>(sum) / n;
}

int main() {
    int n;

    cout << "Enter the number of integers: ";
    cin >> n;

    int arr[n]; // Array to store n integers

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    float average = calculateAverage(arr, n);
    cout << "Average = " << average << endl;

    return 0;
}*/
/*problem 3
int findMinimum(int arr[], int n) {
int minElement = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] < minElement) {
minElement = arr[i];
}
}
return minElement;
}

int main() {
int n;

cout << "Enter the number of integers: ";
cin >> n;

int arr[n]; // Array to store n integers

cout << "Enter " << n << " integers: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}

int minValue = findMinimum(arr, n);
cout << "Min = " << minValue << endl;

return 0;
}*/
/*problem 4
int indexOfLargestElement(double array[], int size) {
if (size <= 0) return -1;

int maxIndex = 0;
for (int i = 1; i < size; i++) {
if (array[i] >= array[maxIndex]) { // Choose the largest index in case of duplicates
maxIndex = i;
}
}
return maxIndex;
}

int main() {
const int size = 15;
double arr[size];

cout << "Enter " << size << " numbers: ";
for (int i = 0; i < size; i++) {
cin >> arr[i];
}

int maxIndex = indexOfLargestElement(arr, size);
cout << "Index of the largest element: " << maxIndex << endl;

return 0;
}*/
/*problem 5
bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;

    cout << "Enter the size of the lists: ";
    cin >> size;

    int list1[size], list2[size];

    cout << "Enter " << size << " elements for the first list: ";
    for (int i = 0; i < size; i++) {
        cin >> list1[i];
    }

    cout << "Enter " << size << " elements for the second list: ";
    for (int i = 0; i < size; i++) {
        cin >> list2[i];
    }

    if (strictlyEqual(list1, list2, size)) {
        cout << "Two lists are strictly identical" << endl;
    } else {
        cout << "Two lists are not strictly identical" << endl;
    }

    return 0;
}*/
/*problem 6
int main() {

    int frequency[26] = {0}; // Array to store frequency of lowercase letters
    char ch;

    cout << "Enter characters (enter '0' to stop): ";

    while (true) {
        cin >> ch;
        if (ch == '0') break; // Termination condition

        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++; // Increment frequency for lowercase letters
        }
    }

    // Display frequency of each lowercase letter that appeared
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << char('a' + i) << ": " << frequency[i] << endl;
        }
    }



    return 0;
}*/
/*problem 7
int main() {

    cout <<" Enter the size: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/
/*problem 8
int main() {
    srand(time(0));
    int arr[6]={0};
    for (int i = 0; i < 10000; i++) {
        int x = (rand() % 6) + 1;
        for (int j = 1; j < 7; j++) {
            if (x==j) {
                arr[j-1]++;
            }
        }
    }
    for (int i = 1; i < 7; i++) {
        cout <<i<<":"<< arr[i-1] << "\n";
    }
    return 0;
}*/
/*problem 9
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Declare array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, 0, size - 1);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/
/*problem 10
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; // If any element is smaller than the previous one, it's not sorted
        }
    }
    return true; // If no violations, array is sorted
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
*/
