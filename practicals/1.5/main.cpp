
#include <iostream>
#include <vector>
#include <limits>

//1. Знайти мінімальне значення у послідовності
//int findMin(const std::vector<int>&A) {
//    int minValue = std::numeric_limits<int>::max();  // Ініціалізуємо значенням максимально можливого int
//    for (int val : A) {
//        if (val < minValue) {
//            minValue = val;
//        }
//    }
//    return minValue;
//}
//
//int main() {
//    std::vector<int> A = { 5, 3, 8, 1, 9, -2 };
//    std::cout << "Мінімальне значення: " << findMin(A) << std::endl;
//
//    return 0;
//}

//2. Знайти індекс найбільшого значення серед додатних елементів послідовності
//int findMaxPositiveIndex(const std::vector<int>&A) {
//    int maxIndex = -1;
//    int maxValue = std::numeric_limits<int>::min(); // Ініціалізуємо найменшим значенням int
//    for (size_t i = 0; i < A.size(); ++i) {
//        if (A[i] > 0 && A[i] > maxValue) {
//            maxValue = A[i];
//            maxIndex = i;
//        }
//    }
//    return maxIndex;
//}

//int main() {
//    std::vector<int> A = { -4, 3, 0, 7, 5, -1 };
//    int index = findMaxPositiveIndex(A);
//    if (index != -1) {
//        std::cout << "Індекс найбільшого додатного елемента: " << index << std::endl;
//    }
//    else {
//        std::cout << "Додатних елементів немає" << std::endl;
//    }
//
//    return 0;
//}

//3. Знайти мінімальне значення у послідовності A[n], більше за P
//int findMinGreaterThanP(const std::vector<int>& A, int P) {
//    int minValue = std::numeric_limits<int>::max();
//    for (int val : A) {
//        if (val > P && val < minValue) {
//            minValue = val;
//        }
//    }
//    return (minValue == std::numeric_limits<int>::max()) ? -1 : minValue; // Якщо такого елемента немає
//}

//int main() {
//    std::vector<int> A = { 5, 3, 8, 1, 9, -2 };
//    int P = 4;
//    int result = findMinGreaterThanP(A, P);
//
//    if (result != -1) {
//        std::cout << "Мінімальне значення більше за P: " << result << std::endl;
//    }
//    else {
//        std::cout << "Немає значення, більшого за P" << std::endl;
//    }
//
//    return 0;
//}

//4. Знайти індекс останнього входження значення P у послідовність A[n]
//int findLastOccurrence(const std::vector<int>&A, int P) {
//    int lastIndex = -1;
//    for (size_t i = 0; i < A.size(); ++i) {
//        if (A[i] == P) {
//            lastIndex = i;
//        }
//    }
//    return lastIndex;
//}

//int main() {
//    std::vector<int> A = { 5, 3, 8, 1, 9, 3, 5 };
//    int P = 3;
//    int index = findLastOccurrence(A, P);
//
//    if (index != -1) {
//        std::cout << "Останнє входження P: індекс " << index << std::endl;
//    }
//    else {
//        std::cout << "P не знайдено у послідовності" << std::endl;
//    }
//
//    return 0;
//}

//5. Знайти кількість входжень значення P у послідовність A[n]
int countOccurrences(const std::vector<int>&A, int P) {
    int count = 0;
    for (int val : A) {
        if (val == P) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> A = { 5, 3, 8, 1, 9, 3, 5 };
    int P = 3;
    int count = countOccurrences(A, P);

    std::cout << "Кількість входжень P: " << count << std::endl;

    return 0;
}