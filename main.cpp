#include <iostream>
#include <vector>
#include <thread>
#include <chrono>


// Function to display the array in the console as a series of '#' characters
void display_array(const std::vector<int>& arr) {
    for (int val : arr) {
        for (int i = 0; i < val; ++i) {
            std::cout << '#';
        }
        std::cout << std::endl;
    }
    std::cout << "----------------" << std::endl;
    //pausing the execution of the current thread for 500ms
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}
// Selection sort algorithm implementation
void selection_sort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        size_t min_index = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(arr[i], arr[min_index]);
        }
        display_array(arr);
    }
}

// Insertion sort algorithm implementation
void insertion_sort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
        display_array(arr);
    }
}

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
    vector<int> arr = {2, 8, 1, 3, 6, 7, 5, 4};
    //variable to hold the choice input from the user
    int choice;
    //printing out the menu!! :)
    cout << "Select sorting algorithm:" << endl
              << "1. Bubble Sort" << endl
              << "2. Selection Sort" << endl
              << "3. Insertion Sort" << endl
              << "Enter your choice (1-3):";
    //taking the input from the user
    cin >> choice;
    switch(choice) {
        case 1:
            bubble_sort(arr);
            break;
        case 2:
            selection_sort(arr);
            break;
        case 3:
            insertion_sort(arr);
            break;
        default:
            cout << "Enter values from the menu please! " << endl;
            return 5;
    }


    return 0;
}
