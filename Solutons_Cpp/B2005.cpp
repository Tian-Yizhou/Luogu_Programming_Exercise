/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:24:17
 * @LastEditTime: 2026-04-22 23:39:59
 */
#include <iostream>
#include <format>

using namespace std;

int main() {
    char c;
    cin >> c;
    cout << format("  {}\n", c);
    cout << format(" {0}{0}{0}\n", c);
    cout << format("{0}{0}{0}{0}{0}\n", c);
}