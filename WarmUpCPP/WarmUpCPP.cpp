#include <iostream>

//B�i 1: T�nh S(n) = 1 + 2 + 3 + � + n
void bai_1(int n)
{
    int s = (n * (n + 1)) / 2;
    std::cout << s;
}

int main()
{
    bai_1(5);
}
