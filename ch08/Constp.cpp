//: C08:Constp.cpp
// Constant pointer arg/return

void t(int *) {
    // do nothing
}

void u(const int *cip) {
    //! *cip = 2; // Illegal -- modifies value
    int i = *cip; // OK -- copies value
    //! int *ip2 = cip; // Illegal: non-const
}

const char *v() {
    //! Returns address of STATIC STRING:
    return "return of function()";
}

const int *const w() {
    static int i;
    return &i;
}

int main() {
    int x = 0;
    int *ip = &x;
    const int *cip = &x;

    t(ip); // OK
    //! t(cip); // Not OK
    u(ip); // OK
    u(cip); // Also OK
    //! char *cp = v(); // Not OK
    const char *ccp = v(); // OK
    //! int *ip2 = w(); // Not OK
    const int *const ccip = w(); // OK
    const int *cip2 = w(); // OK
    //! *w() = 1; // Not OK

    return 0;
} ///:~