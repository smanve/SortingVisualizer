#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <functional>


// Bubble sort algorithm implementation
void bubble_sort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
        display_array(arr);
    }
}
//driver of the sorting functions
int main() {
    using namespace std;
    /*initializing a standard array, for example, to emulate data which I want to visualize being sorted.
    It really doesn't matter what the array is, it can be any series of positive integers.*/
    vector<int> arr = {8, 7, 6, 5, 4, 3, 2, 1};
    //variable to hold the choice input from the user
    int choice;
    //printing out the menu!! :)
    cout << "Select sorting algorithm:" << endl
              << "1. Bubble Sort" << endl
              << "2. Selection Sort" << endl
              << "3. Insertion Sort" << endl
              << "Enter your choice (1-3): ";
    //taking the input from the user
    cin >> choice;
    switch(choice) {
        case 1:
            bubble_sort(arr);
            break;
        case 2:
            //selection_sort(arr);
            break;
        case 3:
            //insertion_sort(arr);
            break;
        default:
            cout << "Enter values from the menu please! " << endl;
            return 5;
    }
    }

    return 0;
}
