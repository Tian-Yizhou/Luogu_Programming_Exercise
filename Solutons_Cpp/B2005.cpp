/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:24:17
 * @LastEditTime: 2026-04-22 23:34:06
 */
#include <iostream>
#include <format>

using namespace std;

int main() {
    char c;
    cin >> c;
    cout << format("  {}\n", c) << endl;
    cout << format(" {0}{0}{0}\n", c) << endl;
    cout << format("{0}{0}{0}{0}{0}\n", c) << endl;
}