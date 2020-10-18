// 조건에 맞는 데이터 복사하기 (copy_if)
// 컨테이너를 순회하며 조건에 맞는 데이터만 다른 컨테이너로 복사
// copy_if를 사용하여 원하는 데이터만 복사

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i){ return (i % 2) == 1; }

int main()
{
    vector<int> data1{ 1, 2, 3 };
    vector<int> data2{ 4, 5, 6 };
    vector<int> data3{ 7, 8, 9 };
    vector<int> result;

    copy_if(data1.begin(), data1.end(), back_inserter(result), IsOdd);
    copy_if(data2.begin(), data2.end(), back_inserter(result), [](int arg){ return arg < 5; });
    copy_if(data3.begin(), data3.end(), back_inserter(result), [](int arg){ return arg > 8; });

    cout << "== result ==" << endl;
    for (auto i : result)
        cout << i << ", ";

    return 0;
}
