#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <functional>

//driver of the sorting functions
int main() {
    /*initializing a standard array, for example, to emulate data which I want to visualize being sorted.
    It really doesn't matter what the array is, it can be any series of positive integers.*/
    std::vector<int> arr = {8, 7, 6, 5, 4, 3, 2, 1};
    //variable to hold the choice input from the user
    int choice;
    //printing out the menu!! :)
    std::cout << "Select sorting algorithm:" << endl
              << "1. Bubble Sort" << endl
              << "2. Selection Sort" << endl
              << "3. Insertion Sort" << endl
              << "Enter your choice (1-3): ";
    //taking the input from the user
    std::cin >> choice;

    return 0;
}
