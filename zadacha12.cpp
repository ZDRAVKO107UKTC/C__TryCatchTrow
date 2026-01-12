#include<iostream>
#include<string>
using namespace std;


double safe_divide(double a, double b) {
        if (b == 0) {
            throw "Division by zero";
        }
        return a / b;
};

int main() {
    try {
        cout << safe_divide(10, 2) << endl;
        cout << safe_divide(10, 0) << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
}


