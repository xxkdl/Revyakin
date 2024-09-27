#include <iostream>
#include <vector>
using namespace std;

//1. Замінити у B[m] входження значень із A[n] на середнє значення A[n]
// 
//int main() {
//    int n, m;
//    cout << "Enter the size of sequence A: ";
//    cin >> n;
//    vector<int> A(n);
//    cout << "Enter elements of A: ";
//    for (int i = 0; i < n; i++) cin >> A[i];
//
//    cout << "Enter the size of sequence B: ";
//    cin >> m;
//    vector<int> B(m);
//    cout << "Enter elements of B: ";
//    for (int i = 0; i < m; i++) cin >> B[i];
//
//    // Обчислюємо середнє значення A
//    int sumA = 0;
//    for (int i = 0; i < n; i++) sumA += A[i];
//    double avgA = sumA / double(n);
//
//    // Замінюємо в B всі входження елементів із A на середнє A
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if (B[i] == A[j]) {
//                B[i] = avgA;
//            }
//        }
//    }
//
//    cout << "Modified sequence B: ";
//    for (int i = 0; i < m; i++) cout << B[i] << " ";
//    cout << endl;
//    return 0;
//}

//2. Замінити мінімальні значення в кожній послідовності на суму її елементів
// 
//int main() {
//    int m, n;
//    cout << "Enter the number of sequences: ";
//    cin >> m;
//
//    vector<vector<int>> A(m);
//
//    // Заповнюємо множину послідовностей
//    for (int i = 0; i < m; i++) {
//        cout << "Enter the number of elements in sequence " << i + 1 << ": ";
//        cin >> n;
//        A[i].resize(n);
//        cout << "Enter elements of sequence " << i + 1 << ": ";
//        for (int j = 0; j < n; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    // Замінюємо мінімальні значення на суму елементів послідовності
//    for (int i = 0; i < m; i++) {
//        int sum = 0, minVal = A[i][0];
//        for (int j = 0; j < A[i].size(); j++) {
//            sum += A[i][j];
//            if (A[i][j] < minVal) {
//                minVal = A[i][j];
//            }
//        }
//        for (int j = 0; j < A[i].size(); j++) {
//            if (A[i][j] == minVal) {
//                A[i][j] = sum;
//            }
//        }
//    }
//
//    // Виводимо результат
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            cout << A[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//3. Замінити в A[n] входження значень із B[m] на добуток B[m]

//int main() {
//    int n, m;
//    cout << "Enter the size of sequence A: ";
//    cin >> n;
//    vector<int> A(n);
//    cout << "Enter elements of A: ";
//    for (int i = 0; i < n; i++) cin >> A[i];
//
//    cout << "Enter the size of sequence B: ";
//    cin >> m;
//    vector<int> B(m);
//    cout << "Enter elements of B: ";
//    for (int i = 0; i < m; i++) cin >> B[i];
//
//    // Обчислюємо добуток елементів B
//    int productB = 1;
//    for (int i = 0; i < m; i++) productB *= B[i];
//
//    // Замінюємо входження елементів із B у A на добуток B
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (A[i] == B[j]) {
//                A[i] = productB;
//            }
//        }
//    }
//
//    cout << "Modified sequence A: ";
//    for (int i = 0; i < n; i++) cout << A[i] << " ";
//    cout << endl;
//
//    return 0;
//}

//4. Замінити в кожному стовпці множини A[m, m] максимальні значення на добуток елементів цього стовпця

//int main() {
//    int m;
//    cout << "Enter the size of square matrix A (m x m): ";
//    cin >> m;
//
//    vector<vector<int>> A(m, vector<int>(m));
//    cout << "Enter elements of matrix A:" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    // Замінюємо максимальні значення в кожному стовпці на добуток елементів цього стовпця
//    for (int j = 0; j < m; j++) {
//        int maxVal = A[0][j];
//        int product = 1;
//        for (int i = 0; i < m; i++) {
//            if (A[i][j] > maxVal) {
//                maxVal = A[i][j];
//            }
//            product *= A[i][j];
//        }
//        for (int i = 0; i < m; i++) {
//            if (A[i][j] == maxVal) {
//                A[i][j] = product;
//            }
//        }
//    }
//
//    cout << "Modified matrix A:" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << A[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//5: Замінити в A[n] всі від’ємні значення на максимальні значення із підпослідовності B[m]

//int main() {
//    int n, m;
//    cout << "Enter the size of sequence A: ";
//    cin >> n;
//    vector<int> A(n);
//    cout << "Enter elements of A: ";
//    for (int i = 0; i < n; i++) cin >> A[i];
//
//    cout << "Enter the size of sequence B: ";
//    cin >> m;
//    vector<int> B(m);
//    cout << "Enter elements of B: ";
//    for (int i = 0; i < m; i++) cin >> B[i];
//
//    // Знаходимо максимальне значення з B
//    int maxB = B[0];
//    for (int i = 1; i < m; i++) {
//        if (B[i] > maxB) maxB = B[i];
//    }
//
//    // Замінюємо всі від'ємні значення в A на maxB
//    for (int i = 0; i < n; i++) {
//        if (A[i] < 0) A[i] = maxB;
//    }
//
//    cout << "Modified sequence A: ";
//    for (int i = 0; i < n; i++) cout << A[i] << " ";
//    cout << endl;
//
//    return 0;
//}

//6. Замінити в кожній послідовності A[i] від’ємні значення на суму додатних елементів цієї послідовності

//int main() {
//    int m, n;
//    cout << "Enter the number of sequences: ";
//    cin >> m;
//
//    vector<vector<int>> A(m);
//
//    for (int i = 0; i < m; i++) {
//        cout << "Enter the number of elements in sequence " << i + 1 << ": ";
//        cin >> n;
//        A[i].resize(n);
//        cout << "Enter elements of sequence " << i + 1 << ": ";
//        for (int j = 0; j < n; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    // Замінюємо від'ємні значення на суму додатних елементів
//    for (int i = 0; i < m; i++) {
//        int positiveSum = 0;
//        for (int j = 0; j < A[i].size(); j++) {
//            if (A[i][j] > 0) positiveSum += A[i][j];
//        }
//
//        for (int j = 0; j < A[i].size(); j++) {
//            if (A[i][j] < 0) A[i][j] = positiveSum;
//        }
//    }
//
//    cout << "Modified sequences: " << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            cout << A[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//7. Замінити в B[m] всі додатні значення мінімальним значенням із підпослідовності A[n]

int main() {
    int n, m;
    cout << "Enter the size of sequence A: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter elements of A: ";
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << "Enter the size of sequence B: ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter elements of B: ";
    for (int i = 0; i < m; i++) cin >> B[i];

    // Знаходимо мінімальне значення з A
    int minA = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] < minA) minA = A[i];
    }

    // Замінюємо всі додатні значення в B на minA
    for (int i = 0; i < m; i++) {
        if (B[i] > 0) B[i] = minA;
    }

    cout << "Modified sequence B: ";
    for (int i = 0; i < m; i++) cout << B[i] << " ";
    cout << endl;

    return 0;
}