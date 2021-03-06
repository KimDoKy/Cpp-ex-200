// Json 배열처럼 읽고 쓰기(append)
// Json 요소를 배열처럼 다루는 방법
// Value 에 append하면 배열이 됨

#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
    ofstream json_write;
    json_write.open("json_exam2.json");

    Value root;
    root["Title"] = "Array Exam";

    Value array1;
    array1.append("C#");
    array1.append("C++");

    Value array2;
    array2.append("Q#");
    array2.append("Qt");

    root["Language"]["Sample1"] = array1;
    root["Language"]["Sample2"] = array2;

    json_write << root;
    json_write.close();

    ifstream json_open("json_exam2.json");
    Reader reader;
    Value value;
    reader.parse(json_open, value);

    cout << value << endl << endl;

    for (auto i : value["Language"]["Sample1"])
        cout << "Language Sample1 : " << i << endl;

    return 0;
}
