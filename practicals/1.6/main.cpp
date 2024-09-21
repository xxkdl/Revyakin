#include <iostream>
#include <vector>

//1. Порівняння двох цілих чисел за допомогою бітового подання
//int main() {
//    int A, B;
//    std::cout << "Введіть два числа A і B: ";
//    std::cin >> A >> B;
//
//    if (!(A ^ B)) { // Використовуємо бітову операцію XOR
//        std::cout << "Числа рівні" << std::endl;
//    }
//    else {
//        std::cout << "Числа не рівні" << std::endl;
//    }
//
//    return 0;
//}

//2. Перевірка, чи число кратне 8
//int main() {
//    int A;
//    std::cout << "Введіть число A: ";
//    std::cin >> A;
//
//    if ((A & 7) == 0) { // Перевірка на кратність 8 через маскування останніх 3 бітів
//        std::cout << "Число кратне 8" << std::endl;
//    }
//    else {
//        std::cout << "Число не кратне 8" << std::endl;
//    }
//
//    return 0;
//}

//3. Специфікація для операцій AND, OR, XOR
//std::vector<int> bitwiseAND(const std::vector<int>& seq1, const std::vector<int>& seq2) {
//    std::vector<int> result(seq1.size());
//    for (size_t i = 0; i < seq1.size(); ++i) {
//        result[i] = seq1[i] & seq2[i];
//    }
//    return result;
//}
//
//std::vector<int> bitwiseOR(const std::vector<int>& seq1, const std::vector<int>& seq2) {
//    std::vector<int> result(seq1.size());
//    for (size_t i = 0; i < seq1.size(); ++i) {
//        result[i] = seq1[i] | seq2[i];
//    }
//    return result;
//}
//
//std::vector<int> bitwiseXOR(const std::vector<int>& seq1, const std::vector<int>& seq2) {
//    std::vector<int> result(seq1.size());
//    for (size_t i = 0; i < seq1.size(); ++i) {
//        result[i] = seq1[i] ^ seq2[i];
//    }
//    return result;
//}
//
//int main() {
//    std::vector<int> seq1 = { 1, 0, 1, 1 };
//    std::vector<int> seq2 = { 0, 1, 0, 1 };
//
//    std::vector<int> andResult = bitwiseAND(seq1, seq2);
//    std::vector<int> orResult = bitwiseOR(seq1, seq2);
//    std::vector<int> xorResult = bitwiseXOR(seq1, seq2);
//
//    // Виводимо результати
//    std::cout << "AND: ";
//    for (int bit : andResult) std::cout << bit;
//    std::cout << std::endl;
//
//    std::cout << "OR: ";
//    for (int bit : orResult) std::cout << bit;
//    std::cout << std::endl;
//
//    std::cout << "XOR: ";
//    for (int bit : xorResult) std::cout << bit;
//    std::cout << std::endl;
//
//    return 0;
//}

//4. Специфікація для операцій + та NOT
//std::vector<int> bitwiseNOT(const std::vector<int>&seq) {
//    std::vector<int> result(seq.size());
//    for (size_t i = 0; i < seq.size(); ++i) {
//        result[i] = ~seq[i] & 1; // Операція NOT для одного біта
//    }
//    return result;
//}
//
//std::vector<int> bitwiseAddition(const std::vector<int>& seq1, const std::vector<int>& seq2) {
//    std::vector<int> result(seq1.size());
//    int carry = 0;
//    for (int i = seq1.size() - 1; i >= 0; --i) {
//        int sum = seq1[i] + seq2[i] + carry;
//        result[i] = sum % 2;
//        carry = sum / 2;
//    }
//    return result;
//}
//
//int main() {
//    std::vector<int> seq1 = { 1, 0, 1, 1 };
//    std::vector<int> seq2 = { 0, 1, 0, 1 };
//
//    std::vector<int> notSeq1 = bitwiseNOT(seq1);
//    std::vector<int> addResult = bitwiseAddition(seq1, seq2);
//
//    // Виводимо результати
//    std::cout << "NOT Seq1: ";
//    for (int bit : notSeq1) std::cout << bit;
//    std::cout << std::endl;
//
//    std::cout << "Addition: ";
//    for (int bit : addResult) std::cout << bit;
//    std::cout << std::endl;
//
//    return 0;
//}

//5. Сума двох цілих чисел за допомогою бітових операцій
//int addBitwise(int A, int B) {
//    while (B != 0) {
//        int carry = A & B;  // Знаходимо перенос
//        A = A ^ B;          // Знаходимо суму без переносів
//        B = carry << 1;     // Переносимо на один біт ліворуч
//    }
//    return A;
//}
//
//int main() {
//    int A, B;
//    std::cout << "Введіть два числа A і B: ";
//    std::cin >> A >> B;
//
//    int sum = addBitwise(A, B);
//    std::cout << "Сума: " << sum << std::endl;
//
//    return 0;
//}

//6. Зсув послідовності чисел вліво та вправо
std::vector<int> shiftLeft(const std::vector<int>&seq, int positions) {
    std::vector<int> result(seq.size());
    for (size_t i = 0; i < seq.size(); ++i) {
        if (i + positions < seq.size()) {
            result[i] = seq[i + positions];
        }
        else {
            result[i] = 0;
        }
    }
    return result;
}

std::vector<int> shiftRight(const std::vector<int>& seq, int positions) {
    std::vector<int> result(seq.size());
    for (size_t i = 0; i < seq.size(); ++i) {
        if (i >= positions) {
            result[i] = seq[i - positions];
        }
        else {
            result[i] = 0;
        }
    }
    return result;
}

int main() {
    std::vector<int> seq = { 1, 0, 1, 1, 0 };
    int positions;

    std::cout << "Введіть кількість позицій для зсуву: ";
    std::cin >> positions;

    std::vector<int> leftShifted = shiftLeft(seq, positions);
    std::vector<int> rightShifted = shiftRight(seq, positions);

    // Виводимо результати
    std::cout << "Зсув вліво: ";
    for (int bit : leftShifted) std::cout << bit;
    std::cout << std::endl;

    std::cout << "Зсув вправо: ";
    for (int bit : rightShifted) std::cout << bit;
    std::cout << std::endl;

    return 0;
}