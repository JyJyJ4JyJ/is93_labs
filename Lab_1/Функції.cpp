#include <iostream>
using namespace std;
void Pruriv(int x, int y)
{
    if ((x ^ y) != 0)
    {
        cout << "����i ����� ���i��i" << endl;
    }
    else {
        cout << "����i ����� �i��i" << endl;
    }
}
int Suma_Bit(int a,int b)
{
    int counter;
    while (b != 0) {
        counter = a & b;
        a = a ^ b;
        b = counter << 1;
    }
    return a;
}