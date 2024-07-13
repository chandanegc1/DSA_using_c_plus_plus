#include <iostream>
#include <stack>
using namespace std;

// 1#Function to reverse a sentence
void reverseSentence(string str) {
    string str2 = "";
    stack<string> st;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            st.push(str2);
            str2 = "";
        } else {
            str2 += str[i];
        }
    }
    
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    string str = "How are you?";
    reverseSentence(str);
    return 0;
}
