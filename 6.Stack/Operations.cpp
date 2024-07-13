#include <iostream>
#include <stack>
#include <cmath>     // For std::pow
#include <algorithm> // For std::max and std::min

using namespace std;

// 1#Function to reverse a sentence
void reverseSentence(string str)
{
    string str2 = "";
    stack<string> st;

    for (int i = 0; i <= str.length(); i++)
    {
        if (i == str.length() || str[i] == ' ')
        {
            st.push(str2);
            str2 = "";
        }
        else
        {
            str2 += str[i];
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

// 2# calclulate Prefix  expresstion
void prefixEvaluation(string str)
{
    stack<int> st;
    int n = str.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            st.push(str[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (str[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(op1 ^ op2);
                break;
            }
        }
    }
    cout << st.top()<<endl;
}

// 3# calclulate P0stfix  expresstion
void postfixEvaluation(string str)
{
    stack<int> st;
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            st.push(str[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (str[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            default:
                cout << "Invalid operator encountered: " << str[i] << endl;
                return;
            }
        }
    }
    cout << st.top() << endl;
}
// 4# Infix to prefix conversion
int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return -1;
}
void infixToPostfix(string str)
{
    stack<char> st;
    string sum = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i];
        }
        else if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                sum += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(')
                st.pop();
        }
        else
        {
            while (!st.empty() && prec(str[i]) <=prec(st.top()))
            {
                sum += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
     while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << "Postfix expression: " << sum << endl;
}
int main()
{
    // Test reverseSentence function
    string sentence = "How are you?";
    reverseSentence(sentence);
    
    // Test prefixEvaluation function
    string prefixExpr = "+*123";
    prefixEvaluation(prefixExpr);
    
    // Test postfixEvaluation function
    string postfixExpr = "231*+9-";
    postfixEvaluation(postfixExpr);
    
    // Test infixToPostfix function
    string infixExpr = "3+5*(2-8)";
    infixToPostfix(infixExpr);

    return 0;
}
