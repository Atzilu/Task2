#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> increaseVector(vector<int> vec, int n)
{
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] += n;
    }
    return vec;
}

void testIncreaseVector()
{
    int C;
    cout << "Введите кол-во элементов в векторе:" << endl;
    cin >> C;
    vector<int> vec = { C };
    int n;
    cout << "Введите n:" << endl;
    cin >> n;
    cout << "Введите вектор:" << endl;
    for (auto& it : vec)
    {
        cin >> it;
    }
    vector<int> result = increaseVector(vec, n);
    assert(result.size() == vec.size());
    for (int m = 0; m < vec.size(); m++)
    {
        assert(result[m] == vec[m] + n);
    }
    cout << "Все тесты пройдены" << endl;
}

int main()
{
    testIncreaseVector();
    return 0;
}