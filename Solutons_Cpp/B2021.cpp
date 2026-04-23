/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:36:04
 * @LastEditTime: 2026-04-22 23:42:08
 */
#include <iostream>
#include <format>

using namespace std;

int main() {
    float f;
    cin >> f;
    cout << format("{:.3f}", f) << endl;
    // cout.precision(3);
    // cout << fixed;
    // cout << f << endl;
}