#include <iostream>

int main() {
    int arr[] = {1, 2, 2, 4, 2, 6, 7, 10, 1, 10, 10, 7, 5, 8, 8, 8, 8, 1, 1, 1, 1};
    const size_t MAX_SIZE = sizeof(arr) / sizeof(arr[0]);
    size_t SIZE = MAX_SIZE;

    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
            
                for (size_t k = j; k < SIZE - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                SIZE--;
                j--;
            }
        }
    }

    for (size_t i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

