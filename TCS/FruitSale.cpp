#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<string, pair<double, int>>> fruits;
    pair<double, int> pair_value;
    pair<string, pair<double, int>> fruit;
    pair_value.first = 1.0;
    pair_value.second = 5;

    fruit.first = "Apple";
    fruit.second = pair_value;

    fruits.push_back(fruit);

    pair_value.first = 10.0;
    pair_value.second = 5;

    fruit.first = "Orange";
    fruit.second = pair_value;

    fruits.push_back(fruit);

    pair_value.first = 10.0;
    pair_value.second = 5;

    fruit.first = "Apple";
    fruit.second = pair_value;

    fruits.push_back(fruit);

    for (auto a : fruits)
    {
        cout << a.first << "  ";
        cout << a.second.first << "  ";
        cout << a.second.second << endl;
    }

    double sum = 0;
    int quantity = 0;
    cout << "Average sale : ";
    for (auto a : fruits)
    {
        quantity++;
        sum = (a.second.first * a.second.second) + sum;
    }
    cout << sum / quantity;
}