#include <iostream>
#include <cmath>
using namespace std;

//1. Знайти значення суми чисел від 1 до 5:
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 5; i++) {
//        sum += i;
//    }
//    cout << "Сума чисел від 1 до 5: " << sum << endl;
//    return 0;
//}

//2. Знайти факторіал числа N :
//int main() {
//    int N, factorial = 1;
//    cout << "Введіть число N: ";
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        factorial *= i;
//    }
//
//    cout << "Факторіал числа " << N << ": " << factorial << endl;
//    return 0;
//}


//3. Знайти суму всіх парних чисел на проміжку від 0 до N :
//int main() {
//    int N, sum = 0;
//    cout << "Введіть число N: ";
//    cin >> N;
//
//    for (int i = 0; i <= N; i += 2) {
//        sum += i;
//    }
//
//    cout << "Сума всіх парних чисел від 0 до " << N << ": " << sum << endl;
//    return 0;
//}

//4. Знайти добуток перших n елементів арифметичної прогресії :
//int main() {
//    int a1, d, n, product = 1;
//    cout << "Введіть перший член прогресії (a1): ";
//    cin >> a1;
//    cout << "Введіть різницю прогресії (d): ";
//    cin >> d;
//    cout << "Введіть кількість елементів (n): ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        product *= (a1 + i * d);
//    }
//
//    cout << "Добуток перших " << n << " елементів прогресії: " << product << endl;
//    return 0;
//}

//5. Протабулювати функцію f(x) = cos(x) на проміжку від 0 до π з кроком h = 0.01:
int main() {
    const double pi = 3.141592653589793;
    double h = 0.01;

    for (double x = 0; x <= pi; x += h) {
        cout << "f(" << x << ") = " << cos(x) << endl;
    }

    return 0;
}