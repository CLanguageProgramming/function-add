#include <stdio.h>
int add();
int main()
{
    int add1 = 164;
    int add2 = 946;
    int sum  = add(add1, add2);
    printf("%d", sum);
}
int add(int add1, int add2)
{
    int sum = add1 + add2;
    return sum;
}
