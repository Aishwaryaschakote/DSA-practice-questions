#include <iostream>

using namespace std;

int main() {
    int age;

    // Taking input from the user
    cout << "Enter the age of the person: ";
    cin >> age;

    // Checking if the person is a senior citizen
    if (age >= 60) {
        cout << "The person is a senior citizen." << endl;
    } else {
        cout << "The person is NOT a senior citizen." << endl;
    }

    return 0;
}
