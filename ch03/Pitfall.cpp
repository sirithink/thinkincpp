//: C03:Pitfall.cpp
// Operator mistakes

int main() {
    int a = 1;
    int b = 1;

    while (a = b) { //! "==" should be used here
        // ...
    }

    return 0;
} ///:~
