#include <iostream>
#include <vector>
using namespace std;

//1. ������� � B[m] ��������� ������� �� A[n] �� ������ �������� A[n]
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
//    // ���������� ������ �������� A
//    int sumA = 0;
//    for (int i = 0; i < n; i++) sumA += A[i];
//    double avgA = sumA / double(n);
//
//    // �������� � B �� ��������� �������� �� A �� ������ A
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

//2. ������� ������� �������� � ����� ����������� �� ���� �� ��������
// 
//int main() {
//    int m, n;
//    cout << "Enter the number of sequences: ";
//    cin >> m;
//
//    vector<vector<int>> A(m);
//
//    // ���������� ������� �������������
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
//    // �������� ������� �������� �� ���� �������� �����������
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
//    // �������� ���������
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < A[i].size(); j++) {
//            cout << A[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//3. ������� � A[n] ��������� ������� �� B[m] �� ������� B[m]

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
//    // ���������� ������� �������� B
//    int productB = 1;
//    for (int i = 0; i < m; i++) productB *= B[i];
//
//    // �������� ��������� �������� �� B � A �� ������� B
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

//4. ������� � ������� ������� ������� A[m, m] ���������� �������� �� ������� �������� ����� �������

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
//    // �������� ���������� �������� � ������� ������� �� ������� �������� ����� �������
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

//5: ������� � A[n] �� �䒺�� �������� �� ���������� �������� �� ������������� B[m]

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
//    // ��������� ����������� �������� � B
//    int maxB = B[0];
//    for (int i = 1; i < m; i++) {
//        if (B[i] > maxB) maxB = B[i];
//    }
//
//    // �������� �� ��'��� �������� � A �� maxB
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

//6. ������� � ����� ����������� A[i] �䒺�� �������� �� ���� �������� �������� ���� �����������

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
//    // �������� ��'��� �������� �� ���� �������� ��������
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

//7. ������� � B[m] �� ������ �������� ��������� ��������� �� ������������� A[n]

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

    // ��������� �������� �������� � A
    int minA = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] < minA) minA = A[i];
    }

    // �������� �� ������ �������� � B �� minA
    for (int i = 0; i < m; i++) {
        if (B[i] > 0) B[i] = minA;
    }

    cout << "Modified sequence B: ";
    for (int i = 0; i < m; i++) cout << B[i] << " ";
    cout << endl;

    return 0;
}