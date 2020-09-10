// 반복문을 이용하여 피라미드 출력하기

#include <iostream>

using namespace std;

int main()
{
    int offset = 4;
    int j = 0;

    for (int i = 1; i <= offset; i++, j = 0)
    {
        for (int k = 1; k <= offset - i; k++)
            cout << "  ";

        while (j != 2 * i -1)
        {
            cout << "* ";
            j++;
        }

        cout << endl;
    }

    return 0;
}
