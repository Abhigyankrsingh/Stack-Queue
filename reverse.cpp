#include <iostream>
#include <stack>
using namespace std;

void reverseString(string &str) {
    stack<char> s;

    // Push characters onto the stack
    for (char c : str) {
        s.push(c);
    }

    // Pop characters from the stack and put them back in the string in reverse order
    for (int i = 0; i < str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
}

int main() {
    string input = "Hello, world!";
    cout << "Original string: " << input << endl;

    // Reverse the string
    reverseString(input);

    cout << "Reversed string: " << input << endl;
    return 0;
}
