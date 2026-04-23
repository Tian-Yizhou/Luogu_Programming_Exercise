/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:43:25
 * @LastEditTime: 2026-04-22 23:46:06
 */
#include <iostream>
#include <format>

using namespace std;

int main() {
    double d;
    cin >> d;
    // cout << format("{:.12f}", d);
    cout.precision(12);
    cout << fixed;
    cout << d << endl;
}
