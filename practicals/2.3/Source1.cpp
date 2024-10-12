#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

// 1. ?�?�?����� �?�??�?�??��� ���?� ��?? �� �?��?������� �� ?� ?�?���??�? ?� �?�?????� �???��?� ��?������.
void n1(vector<int>& B) {
    for (int i = 0; i < B.size() - 1; i++) {
        for (int j = 0; j < B.size() - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                swap(B[j], B[j + 1]);
            }
        }
    }
}

// 2. ?�?�?����� �?�??�?�??��� �?�?�??� ��?? �� �?��?������� �� ?� �����??�? �???��??? ���?���.
void n2(vector<int>& B) {
    for (int i = 0; i < B.size() - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < B.size(); j++) {
            if (B[j] > B[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(B[i], B[maxIndex]);
    }
}

// 3. ??��?������� �???� �?�??�?�??��� � ????�?? ?� ?�?���??�? ?� �?�?????� �???��?� ��?������.
void n3(vector<int>& seq) {
    for (int i = 0; i < seq.size() - 1; i++) {
        for (int j = 0; j < seq.size() - i - 1; j++) {
            if (seq[j] > seq[j + 1]) {
                swap(seq[j], seq[j + 1]);
            }
        }
    }
}

// 4. ?�?�?����� ??�� �?�??�?�??��� ? ?���?�?�?� ??????�?� �????� �?�??�?�??��? �� �?��?������� �� ?� �����??�? ?� �?�?????� �???��?� ���?���.
void n4(vector<int>& B) {
    for (int i = 0; i < B.size() - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < B.size(); j++) {
            if (B[j] > B[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(B[i], B[maxIndex]);
    }
}

// 5. ??��?������� ??????�� ????�??� �?�???�?? �������??� ?����? ?� ?�?���??�? �???��??? ���?���.
void n5(vector<int>& diag) {
    for (int i = 0; i < diag.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < diag.size(); j++) {
            if (diag[j] < diag[minIndex]) {
                minIndex = j;
            }
        }
        swap(diag[i], diag[minIndex]);
    }
}

// 6. ??��?������� �???? ��?��?�� ?����? ?� �����??�? ?� �?�?????� �???��?� ��?������.
void n6(vector<vector<int>>& A, int m, int col) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (A[j][col] < A[j + 1][col]) {
                swap(A[j][col], A[j + 1][col]);
            }
        }
    }
}

// 7. ?�?�?����� ??�� �?�??�?�??��� ?? ��? ?????�?�?� ??????�?� �?????? ��?���� �� �?��?������� �� ?� ?�?���??�? ?� �?�?????� �???��?� ���?���.
void n7(vector<int>& B) {
    for (int i = 0; i < B.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < B.size(); j++) {
            if (B[j] < B[minIndex]) {
                minIndex = j;
            }
        }
        swap(B[i], B[minIndex]);
    }
}

int main() {
    int choice = -1; // ??���?�?�?? ���?� ��� -1, ��?�� �?�??��� ?���?�
    do {
        cout << "\n?��?�?�� ?����??� (1-7, 0 �?� ��?��): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << "?�?�?�� �??��?��� ??????�?� � �?�??�?�??��? A: ";
            cin >> n;
            vector<int> A(n), B;

            cout << "?�?�?�� ??????�� �?�??�?�??��? A: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
                if (A[i] % 2 == 0) {
                    B.push_back(A[i]);
                }
            }

            n1(B);

            cout << "??��?��?��?� �?�??�?�??��� ���?� ��?? B: ";
            for (int i = 0; i < B.size(); i++) {
                cout << B[i] << " ";
            }
            cout << endl;
            break;
        }
        case 2: {
            int n;
            cout << "?�?�?�� �??��?��� ??????�?� � �?�??�?�??��? A: ";
            cin >> n;
            vector<int> A(n), B;

            cout << "?�?�?�� ??????�� �?�??�?�??��? A: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
                if (A[i] < 0) {
                    B.push_back(A[i]);
                }
            }

            n2(B);

            cout << "??��?��?��?� �?�??�?�??��� �?�'�??� ��?? B: ";
            for (int i = 0; i < B.size(); i++) {
                cout << B[i] << " ";
            }
            cout << endl;
            break;
        }
        case 3: {
            int m, n;
            cout << "?�?�?�� �??��?��� �?�??�?�??��??: ";
            cin >> m;

            vector<vector<int>> A(m);

            for (int i = 0; i < m; i++) {
                cout << "?�?�?�� �??��?��� ??????�?� � " << i + 1 << "-? �?�??�?�??��?: ";
                cin >> n;
                A[i].resize(n);
                cout << "?�?�?�� ??????�� �?�??�?�??��?: ";
                for (int j = 0; j < n; j++) {
                    cin >> A[i][j];
                }

                n3(A[i]);  // ??����?? �???� �?�??�?�??���
            }

            cout << "??��?��?��?? �?�??�?�??��?: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < A[i].size(); j++) {
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 4: {
            int m, n;
            cout << "?�?�?�� �??��?��� �?�??�?�??��??: ";
            cin >> m;

            vector<vector<int>> A(m);
            vector<int> B;

            for (int i = 0; i < m; i++) {
                cout << "?�?�?�� �??��?��� ??????�?� � " << i + 1 << "-? �?�??�?�??��?: ";
                cin >> n;
                A[i].resize(n);
                cout << "?�?�?�� ??????�� �?�??�?�??��?: ";
                for (int j = 0; j < n; j++) {
                    cin >> A[i][j];
                }

                int maxElement = A[i][0];
                for (int j = 1; j < n; j++) {
                    if (A[i][j] > maxElement) {
                        maxElement = A[i][j];
                    }
                }
                B.push_back(maxElement);
            }

            n4(B);

            cout << "??��?��?��?� �?�??�?�??��� ?���?�?�?� ??????�?� B: ";
            for (int i = 0; i < B.size(); i++) {
                cout << B[i] << " ";
            }
            cout << endl;
            break;
        }
        case 5: {
            int m;
            cout << "?�?�?�� �????� �������??� ?����?: ";
            cin >> m;

            vector<vector<int>> A(m, vector<int>(m));
            vector<int> diag;

            cout << "?�?�?�� ??????�� ?����? A: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    cin >> A[i][j];
                    if (i == j) {
                        diag.push_back(A[i][j]);  // ??���?? ??????� ? ????�??� �?�???�??
                    }
                }
            }

            n5(diag);  // ??����?? �?�???�?� ?� ?�?���??�?

            cout << "??��?��?��?? ??????�� ????�??� �?�???�??: ";
            for (int i = 0; i < diag.size(); i++) {
                cout << diag[i] << " ";
            }
            cout << endl;
            break;
        }
        case 6: {
            int m;
            cout << "?�?�?�� �????� �������??� ?����?: ";
            cin >> m;

            vector<vector<int>> A(m, vector<int>(m));

            cout << "?�?�?�� ??????�� ?����? A: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    cin >> A[i][j];
                }
            }

            for (int col = 0; col < m; col++) {
                n6(A, m, col);  // ??����?? ��?��?��
            }

            cout << "??��?��?��?? ��?���? ?����?: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 7: {
            int m;
            cout << "?�?�?�� �????� ?����?: ";
            cin >> m;

            vector<vector<int>> A(m, vector<int>(m));
            vector<int> B(m);

            cout << "?�?�?�� ??????�� ?����? A: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    cin >> A[i][j];
                }
            }

            for (int col = 0; col < m; col++) {
                int minElement = A[0][col];
                for (int row = 1; row < m; row++) {
                    if (A[row][col] < minElement) {
                        minElement = A[row][col];
                    }
                }
                B[col] = minElement;  // ??���?? ?????�?�?�? ??????� ��?���� � ??�� �?�??�?�??���
            }

            n7(B);  // ??����?? �?�??�?�??��� ?????�?�?� ??????�?�

            cout << "??��?��?��?? ?????�?�?? ??????�� ��?���?�: ";
            for (int i = 0; i < B.size(); i++) {
                cout << B[i] << " ";
            }
            cout << endl;
            break;
        }
        case 0:
            cout << "?�?� ? ��??��?�." << endl;
            break;
        default:
            cout << "??�����?�?�? ���?�. ?��?��?�? �? ��?." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
