#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack variables
char stack[MAX];
int top = -1;

// Push a character onto the stack
void push(char ch) {
    if (top < MAX - 1) {
        stack[++top] = ch;
    } else {
        printf("Stack overflow\n");
    }
}

// Pop a character from the stack
char pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return '\0';
    }
}

// Peek the top element of the stack
char peek() {
    if (top >= 0) {
        return stack[top];
    } else {
        return '\0';
    }
}

// Check if the character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// Determine precedence of operators
int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

// Reverse a string
void reverse(char exp[]) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
}

// Convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char ch = infix[i];
        if (isalnum(ch)) {
            postfix[j++] = ch; // Append operand to postfix expression
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); // Remove '(' from stack
        } else if (isOperator(ch)) {
            while (top != -1 && precedence(peek()) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
        i++;
    }

    // Pop all remaining operators from the stack
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

// Convert infix to prefix
void infixToPrefix(char infix[], char prefix[]) {
    reverse(infix); // Reverse the infix expression
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char ch = infix[i];
        if (isalnum(ch)) {
            prefix[j++] = ch; // Append operand to prefix expression
        } else if (ch == ')') {
            push(ch);
        } else if (ch == '(') {
            while (peek() != ')') {
                prefix[j++] = pop();
            }
            pop(); // Remove ')' from stack
        } else if (isOperator(ch)) {
            while (top != -1 && precedence(peek()) > precedence(ch)) {
                prefix[j++] = pop();
            }
            push(ch);
        }
        i++;
    }

    // Pop all remaining operators from the stack
    while (top != -1) {
        prefix[j++] = pop();
    }

    prefix[j] = '\0'; // Null-terminate the prefix expression
    reverse(prefix);  // Reverse the prefix expression to get the final result
}

int main() {
    char infix[MAX], postfix[MAX], prefix[MAX];

    printf("Enter infix expression: ");
    gets(infix);

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);

    return 0;
}