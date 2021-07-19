#include <iostream>
#include <bits/stdc++.h>

using namespace std;
ifstream f1("data.in");
ofstream f2("data.out");

//PROBLEM
//Given an expression of parenthesis,
//which also includes curly braces and brackets
//find out if it's syntactically correct or not

//examples
//[(){}] - correct
//[([)] - false


//SOLUTION
//scan from left to right

//if opening symbol, add it to stack

//if closing symbol, remove last opening
//symbol from stack

//1 means (
//2 means {
//3 means [


int index, Stack[100], n;
char  Input[100];

void push( int num ) {
    ++index;
    if( index > (sizeof(Stack)/sizeof(Stack[0])) -1  ){
        --index;
        cout << "Stack overflow" << endl;
        exit(0);
    } else {
        Stack[index] = num;
    }
}

bool isEmpty() {
    if ( index > 0 ) {
        return false;
    } else {
        return true;
    }

}


void pop() {
        Stack[index] = 0;
        --index;
    }

char TopOfStack() {
    return Stack[index];
}


bool VerifyExpression( char input[] ) {
    index = 0;
    int n = strlen(input);

    for(int i = 0; i <n; i++){
            if (input[i] == '(') push(1);
            if (input[i] == '{') push(2);
            if (input[i] == '[') push(3);

            if (input[i] == ')') {
            // if the stack is empty, or the last parenthesis is different
            // than the one we are close, then the input is wrong
            if (isEmpty() == true || TopOfStack() != 1) return false;
            else {
                pop();
                 }
            }

            if (input[i] == '}') {
                if (isEmpty() == true || TopOfStack() != 2) return false;
                else {
                    pop();
                }
            }

            if (input[i] == ']') {
                if (isEmpty() == true || TopOfStack() != 3) return false;
                else {
                    pop();
                }
            }
        }
if ( isEmpty() == true ) return true;
    else return false;
}







int main()
{
    cin >> Input;
    cout << VerifyExpression(Input);





    return 0;

}








