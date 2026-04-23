/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:19:54
 * @LastEditTime: 2026-04-22 23:26:18
 */

#include <iostream>
#include <format>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << format("{:>8} {:>8} {:>8}", a, b, c) << endl;
}