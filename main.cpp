#include <iostream> 
using namespace std;

int main() {
    int a;
    int b;
    cout << "Give me two numbers you wanna swap, seperate them with a space -> ";
    cin >> a >> b;

    swapIntegers(&a, &b);

    return 0;
}

