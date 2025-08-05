// VIDHI RATAN
// 24070123131
// B2
#include <iostream>
using namespace std;
int main()
{
    int a = 13;
    int b = 14;
    int bitwise_and,bitwise_or,bitwise_not_a,bitwise_not_b,bitwise_xor,left_shift_a,right_shift_a,left_shift_b,right_shift_b;
    bitwise_and = a&b;
    bitwise_or = a|b;
    bitwise_not_a = ~a;
    bitwise_not_b = ~b;
    bitwise_xor = a^b;
    left_shift_a = a << 1;
    right_shift_a = a >> 2;
    left_shift_b = b << 2;
    right_shift_b = b >> 2;
    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "NOT a: " << bitwise_not_a << endl;
    cout << "NOT b: " << bitwise_not_b << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "leftshift a: " << left_shift_a << endl;
    cout << "leftshift b: " << left_shift_b << endl;
    cout << "rightshift a: " << right_shift_a << endl;
    cout << "rightshift b: " << right_shift_b << endl;
    return 0;
}

/*
output:
AND: 12
OR: 15
NOT a: -14
NOT b: -15
XOR: 3
leftshift a: 26
leftshift b: 56
rightshift a: 3
rightshift b: 3
*/
