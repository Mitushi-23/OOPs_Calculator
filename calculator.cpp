#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class simple
{

public:
    int x, y;
    double ans;
    void getdata()
    {
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
    }

    int addition()
    {

        ans = x + y;
        return ans;
    }

    int product()
    {

        ans = x * y;
        return ans;
    }

    int subtraction()
    {

        ans = x - y;
        return ans;
    }

    double divide()
    {

        ans = (double)x / y;
        return ans;
    }
};

class scientific
{

    int value;
    double ans;

public:
    void gdata()
    {
        cout << "Enter a number" << endl;
        cin >> value;
    }

    int square()
    {

        ans = pow(value, 2);
        return ans;
    }

    int cube()
    {

        ans = pow(value, 3);
        return ans;
    }

    double squareroot()
    {

        ans = sqrt(value);
        return ans;
    }

    double cuberoot()
    {

        ans = cbrt(value);
        return ans;
    }
};

class hybrid : public simple, public scientific
{
    string input;

public:
    string perform()
    {
        cout << "Which operation you want yo perform?" << endl;
        cin >> input;
        return input;
    }

    void display()
    {
        if (input == "sum" || input == "add" || input == "addition" || input == "+")
            cout << "sum is " << addition() << endl;

        if (input == "subtraction" || input == "difference" || input == "minus" || input == "-")
            cout << "difference is " << subtraction() << endl;

        if (input == "product" || input == "multiplication" || input == "multiply" || input == "*")
            cout << "product is " << product() << endl;

        if (input == "division" || input == "divide" || input == "div" || input == "/")
            cout << "quotient is " << divide() << endl;

        if (input == "square")
            cout << "square is " << square() << endl;

        if (input == "cube")
            cout << "cube is " << cube() << endl;

        if (input == "squareroot")
            cout << "squareroot is " << squareroot() << endl;

        if (input == "cuberoot")
            cout << "cuberoot is " << cuberoot() << endl;
    }
};

int main()
{
    hybrid calc;
    
    calc.getdata();
    calc.gdata();
    calc.perform();
    calc.display();
    return 0;
}