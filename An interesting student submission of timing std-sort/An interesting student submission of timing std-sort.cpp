#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

// Function to generate a vector of random integers
std::vector<int> generateRandomVector(size_t size) {
    std::vector<int> vec(size);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 1000);

    for (auto& element : vec) {
        element = dis(gen);
    }

    return vec;
}

// Bubble sort implementation
void bubbleSort(std::vector<int>& vec) {
    size_t n = vec.size();
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}

// Function to measure execution time
template<typename Func>
long long measureTime(Func func) {
    auto start = std::chrono::high_resolution_clock::now();
    func();
    auto end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
}

int main() {
    std::vector<size_t> sizes = { 100, 10000, 100000 };

    for (size_t size : sizes) {
        std::cout << "Number of elements: " << size << std::endl;

        auto vec = generateRandomVector(size);
        auto copyVec = vec;

        auto stdSortTime = measureTime([&vec]() {
            std::sort(vec.begin(), vec.end());
            });

        auto bubbleSortTime = measureTime([&copyVec]() {
            bubbleSort(copyVec);
            });

        std::cout << "std::sort time: " << stdSortTime << " ns" << std::endl;
        std::cout << "bubbleSort time: " << bubbleSortTime << " ns" << std::endl;
        std::cout << "Performance difference: " << static_cast<double>(bubbleSortTime) / stdSortTime << "x" << std::endl;
        std::cout << std::endl;
    }

    return 0;
}