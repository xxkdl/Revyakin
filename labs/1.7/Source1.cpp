#include <iostream>
using namespace std;

//1. ������ ��������� �������

//void blockFunction1() {
//    int a = 10;
//    cout << "Block 1, a = " << a << endl;
//
//    // ��������� ����
//    {
//        int b = 20;
//        cout << "Nested Block in Block 1, b = " << b << endl;
//    }
//}
//
//void blockFunction2() {
//    int c = 30;
//    cout << "Block 2, c = " << c << endl;
//}
//
//int main() {
//    cout << "Main Block" << endl;
//    blockFunction1();
//    blockFunction2();
//
//    // ��������� ����
//    {
//        int d = 40;
//        cout << "Nested Block in Main, d = " << d << endl;
//    }
//
//    return 0;
//}

//2. ��������� ������� ���'��

//static int globalStaticVar = 100;  // �������� ����� ���� main
//
//void functionWithStaticVar() {
//    static int staticVar = 0;  // �������� ����� �������� �����
//    staticVar++;
//    cout << "Static Var in function: " << staticVar << endl;
//}
//
//int main() {
//    cout << "Global Static Variable: " << globalStaticVar << endl;
//
//    int localVar = 50;
//    cout << "Local Variable: " << localVar << endl;
//
//    functionWithStaticVar();
//    functionWithStaticVar();
//
//    return 0;
//}

//3. ��������� ������� ���'��

//int main() {
//    int* dynamicVar1 = new int(5);  // ��������� ������� � main
//    cout << "Dynamic Variable 1: " << *dynamicVar1 << endl;
//
//    // ��������� ����
//    {
//        int* dynamicVar2 = new int(10);
//        cout << "Dynamic Variable 2: " << *dynamicVar2 << endl;
//        delete dynamicVar2;  // ��������� ���'��
//    }
//
//    delete dynamicVar1;  // ��������� ���'��
//    return 0;
//}
//
////4. �������� ����������� ������� �������� ����
//
//int var = 10;  // ��������� �����
//
//void testFunction() {
//    int var = 20;  // �������� �����
//    cout << "Local var: " << var << endl;
//    cout << "Global var using scope resolution: " << ::var << endl;  // ������������ ����������� ����
//}
//
//int main() {
//    testFunction();
//    return 0;
//}

//5. ��������� ������� ���'�� � "���"

int main() {
    // ������ ��������
    int* heapVar1 = new int(15);
    cout << "Heap Variable 1: " << *heapVar1 << endl;

    // ������ ��������
    int* heapVar2 = new int(25);
    cout << "Heap Variable 2: " << *heapVar2 << endl;

    // ��������� ���'��
    delete heapVar1;
    heapVar1 = nullptr;  // ��� �������� ��������� �����

    // �� ��������� ���'��� ��� heapVar2 ��� ������������ �����
    // delete heapVar2;

    return 0;
}