#include <iostream>

int main() {
    setlocale(0, "");
    const int rows = 3;
    const int cols = 5;
    double arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        std::cout << "Введите элементы для строки " << i + 1 << " (5 элементов): ";
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        double sum = 0.0;
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
        double average = sum / cols;
        std::cout << "Среднее арифметическое элементов в строке " << i + 1 << ": " << average << std::endl;
    }

    return 0;
}