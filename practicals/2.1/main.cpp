#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//1. Максимальне значення за абсолютною величиною

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
//    int maxAbsValue = 0;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            maxAbsValue = max(maxAbsValue, abs(A[i][j]));
//        }
//    }
//
//    cout << "Maximum absolute value is: " << maxAbsValue << endl;
//    return 0;
//}

//2. Індекси мінімального значення

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
//    int minValue = A[0][0];
//    int minIndexM = 0, minIndexN = 0;
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            if (A[i][j] < minValue) {
//                minValue = A[i][j];
//                minIndexM = i;
//                minIndexN = j;
//            }
//        }
//    }
//
//    cout << "Minimum value is at sequence " << minIndexM + 1 << ", index " << minIndexN << endl;
//    return 0;
//}
//
////3. Максимальне від’ємне значення
//
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
//    int maxNegValue = -1000000;
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            if (A[i][j] < 0 && A[i][j] > maxNegValue) {
//                maxNegValue = A[i][j];
//            }
//        }
//    }
//
//    if (maxNegValue == -1000000) {
//        cout << "No negative values found." << endl;
//    }
//    else {
//        cout << "Maximum negative value is: " << maxNegValue << endl;
//    }
//
//    return 0;
//}

//4. Мінімальне додатне значення

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
//    int minPosValue = 1000000;
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            if (A[i][j] > 0 && A[i][j] < minPosValue) {
//                minPosValue = A[i][j];
//            }
//        }
//    }
//
//    if (minPosValue == 1000000) {
//        cout << "No positive values found." << endl;
//    }
//    else {
//        cout << "Minimum positive value is: " << minPosValue << endl;
//    }
//
//    return 0;
//}
//
////5. Елементи побічної діагоналі
//
//int main() {
//    int m;
//    cout << "Enter the size of the square matrix: ";
//    cin >> m;
//
//    vector<vector<int>> A(m, vector<int>(m));
//
//    cout << "Enter the elements of the matrix:" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    int minValue = A[0][m - 1];
//    int minIndex = 0;
//
//    for (int i = 1; i < m; i++) {
//        if (A[i][m - i - 1] < minValue) {
//            minValue = A[i][m - i - 1];
//            minIndex = i;
//        }
//    }
//
//    cout << "Minimum value on the secondary diagonal is at index (" << minIndex + 1 << ", " << (m - minIndex) << ")" << endl;
//    return 0;
//}

//6. Останнє входження R

int main() {
    int m, n, R;
    cout << "Enter the number of sequences: ";
    cin >> m;

    vector<vector<int>> A(m);

    for (int i = 0; i < m; i++) {
        cout << "Enter the number of elements in sequence " << i + 1 << ": ";
        cin >> n;
        A[i].resize(n);
        cout << "Enter elements of sequence " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the value R: ";
    cin >> R;

    int lastM = -1, lastN = -1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < A[i].size(); j++) {
            if (A[i][j] == R) {
                lastM = i;
                lastN = j;
            }
        }
    }

    if (lastM == -1) {
        cout << "R not found in the array." << endl;
    }
    else {
        cout << "Last occurrence of R is at sequence " << lastM + 1 << ", index " << lastN << endl;
    }

    return 0;
}