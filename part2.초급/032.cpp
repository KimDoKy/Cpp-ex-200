// 중첩 조건문 이해하기 (if~else  if|else)
// if문의 조건을 여러 번 두는 중첩 사용
// if와 else 사이에 else if 를 추가

#include <iostream>

using namespace std;

int main()
{
    int number1 = 100;
    int number2 = 6;

    if (number1 < number2)
        cout << "number2가 더 큽니다." << endl;
    else if (number1 > number2)
        cout << "number1이 더 큽니다." << endl;
    else
        cout << "number1과 number2는 같습니다." << endl;

    if (number2 < 7)
    {
        if (number2 > 3)
        {
            if (number2 == 4)
                cout << "number2은 4입니다." << endl;
            else if (number2 == 5)
                cout << "number2는 5입니다." << endl;
            else
                cout << "number2는 6입니다." << endl;
        }
        else
        {
            if (number2 == 3)
                cout << "number2는 3입니다." << endl;
            else if (number2 == 2)
                cout << "number2는 2입니다." << endl;
            else
                cout << "number2는 1이하 입니다." << endl;
        }
    }
    return 0;
}
