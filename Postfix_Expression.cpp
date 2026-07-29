#include <iostream>
using namespace std;

int evaluate(char exp[], int &i) {
    if (exp[i] >= '0' && exp[i] <= '9') {
        return exp[i] - '0';  
    }

    char op = exp[i];

    i--;
    int val2 = evaluate(exp, i);

    i--;
    int val1 = evaluate(exp, i);

    switch (op) {
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': return val1 / val2;
    }
    return 0;
}

int main() {
    char exp[100];
    cout << "Enter postfix expression: ";
    cin >> exp;

    int i = 0;
    while (exp[i] != '\0') i++;
    i--; 

    int result = evaluate(exp, i);
    cout << "Result: " << result << endl;
    return 0;
}
