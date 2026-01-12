#include<iostream>
#include<string>
using namespace std;


double safe_divide(double a, double b) {
        if (b == 0) {
            throw "Division by zero";
        }
        return a / b;
};
void dynamic_array_test(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int* dynamic_arr = new int[size];
    for (int i = 0; i < size; i++) {
        dynamic_arr[i] = i;
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << dynamic_arr[i] << " ";
    }
    delete[] dynamic_arr;
}

int main() {
    dynamic_array_test();

    cout <<"\n================="<< endl;
    try {
        cout << safe_divide(10, 2) << endl;
        cout << safe_divide(10, 0) << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
}


