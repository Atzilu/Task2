#include <iostream>
#include <vector>
using namespace std;

vector<int> increaseVector(vector<int> vec, int n)
{
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] += n;
    }
    return vec;
}

int main()
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
    for (int i = 0; i >= result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}