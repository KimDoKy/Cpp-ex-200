// 조건부 삼항 연산자 이해하기 (? :)
// 간단한 if 문을 한줄로 대체할 수 있음
// if ~ else 대신 ? : 를 사용

#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = 2;
    int z = 0;

    z = x > y ? x : y;

    cout << "x와 y중 더 큰 값은: " << z << endl;

    return 0;
}
