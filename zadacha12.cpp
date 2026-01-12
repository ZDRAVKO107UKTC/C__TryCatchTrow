#include<iostream>
#include <memory>
#include<string>
using namespace std;

class Point {
    public:
    int x;
    int y;

        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }
    Point operator+(const Point& p) const {
            return Point(this->x + p.x, this->y + p.y);
        }

};



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


ostream& operator<<(ostream& os, const Point& p) {os << "(X: " << p.x << ", Y: " << p.y << ")"; return os;}


void print_message(const std::string& msg) {
    cout << msg << endl;
}

int main() {
    Point p1(10, 5);
    Point p2(2, 8);

    Point p3 = p1 + p2;
    cout << p3.x << " " << p3.y << endl;
    cout << "p3 e: " << p3 << endl;
    unique_ptr<string> u_ptr = make_unique<string>("Hello World");
    print_message(*u_ptr);

    shared_ptr<int> s_ptr1 = make_shared<int>(42);
    shared_ptr<int> s_ptr2 = s_ptr1;

    cout << "Num of refer: " << s_ptr1.use_count() << endl;


    cout <<"\n================="<< endl;

    dynamic_array_test();

    cout <<"\n================="<< endl;
    try {
        cout << safe_divide(10, 2) << endl;
        cout << safe_divide(10, 0) << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
}


