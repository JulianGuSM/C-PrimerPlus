#include <iostream>

using namespace std;

/*
* 2.34E+22��һ��С���������23λ���֡�����
* 1�����ڵ�23λ��1.��float����ֻ�ܱ�ʾ������
* ǰ6λ��ǰ7λ������޸ĵ�23λ�����ֵû���κ�Ӱ��
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
