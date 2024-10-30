#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;


//��������� ������������� ��
int precedence(char st) {
    if (st == '+' || st == '-') return 1;
    if (st == '*' || st == '/') return 2;
    return 0;
}


//������ ���������� ��������
int applyOperation(int n1, int n2, char st) {
    switch (st) {
    case '*':
        return n1 * n2;

    case '/':
        return n1 / n2;

    case '+':
        return n1 + n2;

    case '-':
        return n1 - n2;
    }
}


// ������� ���������
int evaluateExpression(const string& expression) {
    stack<int> number; //���� ��� ��������� ����� / ��������
    stack<char> oper; //���� ��� ��������� ���������

    istringstream iss(expression);
    string token;


    //�������� ������
    for (size_t i = 0; i < expression.length(); i++) {
        if (expression[i] == ' ') continue;
    }


    // ������� ������ 
    while (iss >> token) {
        if (isdigit(token[0])) {
            number.push(stoi(token));
        }
        else if (token.size() == 1 && strchr("+-*/", token[0])) {
            while (!oper.empty() && precedence(oper.top()) >= precedence(token[0])) {
                int n1 = number.top(); number.pop();
                int n2 = number.top(); number.pop();
                char o1 = oper.top(); oper.pop();
                number.push(applyOperation(n1, n2, o1));
            }
            oper.push(token[0]);
        }
    }

    // ��������� ����������� ���������, �� ����������
    while (!oper.empty()) {
        int n2 = number.top(); number.pop();
        int n1 = number.top(); number.pop();
        char o2 = oper.top(); oper.pop();
        number.push(applyOperation(n1, n2, o2));
    }

    return number.top();
}

// ����� �� ����� 
int main() {
    setlocale(LC_ALL, "ukr");
    string expression;
    cout << "�������� ��� �������: ";
    getline(cin, expression);

    try {
        int result = evaluateExpression(expression);
        cout << "³������: " << result << endl;
    }
    catch (const runtime_error& e) {
        cout << "�������: " << e.what() << endl;
    }

    return 0;
} 