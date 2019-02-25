#include <iostream>

using namespace std;

/*
* 2.34E+22是一个小数点左边有23位数字。加上
* 1就是在第23位加1.但float类型只能表示数字中
* 前6位或前7位，因此修改第23位对这个值没有任何影响
*/

int main()
{
    using namespace std;
    float a = 2.34E+22F;
    float b = a + 1.0F;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
