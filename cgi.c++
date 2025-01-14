#include <iostream>
#include <vector>

int main() {
    // Create a sample vector
    std::vector<int> v = {10, 20, 30, 40, 50};

    // Display the original vector
    std::cout << "Original vector: ";
    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Specify the index (let's say j) of the element to remove
    int j = 2; // Change this to the desired index

    // Check if the index is valid
    if (j >= 0 && j < v.size()) {
        // Erase the element at index j
        v.erase(v.begin() + j);

        // Display the modified vector
        std::cout << "Modified vector: ";
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid index. Element removal failed." << std::endl;
    }

    return 0;
}
