﻿#include <iostream>

//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
void bai_1(int n)
{
    int s = (n * (n + 1)) / 2;
    std::cout << s;
}
//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
void bai_2(int n)
{
    int s = (n * (n + 1) * (2 * n + 1)) / 6;
    std::cout << s;
}
//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
void bai_3(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1*1.0 / i;
    }
    std::cout << s;
}
//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
void bai_4(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1 * 1.0 / (2 * i);
    }
    std::cout << s;
}
//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
void bai_5(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1 * 1.0 / (2 * i + 1);
    }
    std::cout << s;
}
//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
void bai_6(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1 * 1.0 / (i * (i + 1));
    }
    std::cout << s;
}
//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
void bai_7(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i * 1.0 / (i + 1);
    }
    std::cout << s;
}
//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
void bai_8(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1 * 1.0 / (2 * i + 2);
    }
    std::cout << s;
}
//Bài 9: Tính T(n) = 1 x 2 x 3…x N
void bai_9(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }
    std::cout << s;
}
//Bài 10: Tính T(x, n) = x^n
void bai_10(int n,int x)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * x;
    }
    std::cout << s;
}
//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
void bai_11(int n)
{
    int s = 0;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
        s = s + x;
    }
    std::cout << s;
}
//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
void bai_12(int n, int x)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + pow(x,i);
    }
    std::cout << s;
}
//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
void bai_13(int n, int x)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + pow(x, 2*i);
    }
    std::cout << s;
}
//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
void bai_14(int n, int x)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + pow(x, (2 * i) + 1);
    }
    std::cout << s;
}
//Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
void bai_15(int n)
{
    float s = 0;
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        x = x + i;
        s = s + 1*1.0/x;
    }
    std::cout << s;
}
//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
void bai_16(int n,int k)
{
    float s = 0;
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        x = x + i;
        s = s + pow(k,i) * 1.0 / x;
    }
    std::cout << s;
}
//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
void bai_17(int n, int k)
{
    float s = 0;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
        s = s + pow(k, i) * 1.0 / x;
    }
    std::cout << s;
}
//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
void bai_18(int n, int k)
{
    float s = 1;
    int x = 1;
    int temp = 1;
    for (int i = 1; i <= 2*n; i++)
    {
        x = x * i;
        if (i % 2 == 0)
        {
            s = s + pow(k, i) * 1.0 / x;
        }      
    }
    std::cout << s;
}
//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
void bai_19(int n, int k)
{
    float s = 1;
    int x = 1;
    int temp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        x = x * i;
        if (i % 2 != 0)
        {
            s = s + pow(k, i) * 1.0 / x;
        }
    }
    std::cout << s;
}
//Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
void bai_20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << std::endl;
        }
    }
}
int main()
{
    bai_20(20);
}
