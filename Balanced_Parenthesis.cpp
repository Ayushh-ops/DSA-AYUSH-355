#include <iostream>
using namespace std;

int isBalanced(string s) {
    int round = 0, curly = 0, square = 0; 

    for (char ch : s) {
        switch (ch) {
            case '(':
                round++;
                break;
            case '{':
                curly++;
                break;
            case '[':
                square++;
                break;

            case ')':
                if (round == 0) return 0; 
                round--;
                break;
            case '}':
                if (curly == 0) return 0;
                curly--;
                break;
            case ']':
                if (square == 0) return 0;
                square--;
                break;

            default:
                return 0;
        }
    }

    if (round == 0 && curly == 0 && square == 0)
        return 1;
    else
        return 0;
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    int result = isBalanced(input);

    if (result == 1)
        cout << "Balanced Parentheses" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
