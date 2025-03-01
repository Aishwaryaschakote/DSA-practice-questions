#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = INT_MIN;
    int minElement = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout <<"max" << maxElement << endl;
    cout <<"min" << minElement << endl;

    return 0;
}
