#include <iostream>

using namespace std;

int numDup(int arr[], int start, int size, int element, int acc, int counter) {
    // Base case
    if (counter > size){
        return acc;
    }

    // Recursive case
    if (arr[counter] == element){
        acc++;
    }

    counter++;
    return numDup(arr, start, size, element, acc, counter);
}

int numDup(int arr[], int start, int size, int element) {
    return numDup(arr, start, size, element, 0, 0);
}

int main(void){
    int arr[5] = {1,2,4,4,5};
    cout << numDup(arr, 2, 5, 4) << endl;

    return 0;
}
