void swapIntegers(int* a, int* b) {
    int hold = *a;
    *a = *b;
    *b = hold;

    cout << "The first integer you gave me is now " << *a << " and the second one is now " << *b;
}