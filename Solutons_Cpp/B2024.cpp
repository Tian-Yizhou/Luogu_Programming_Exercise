/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:53:38
 * @LastEditTime: 2026-04-22 23:59:54
 */
#include <iostream>
#include <format>
#include <stdio.h>

using namespace std;

int main() {
    double d;
    cin >> d;
    // Method 1
    // printf("%f\n%.5f\n%e\n%g", d, d, d, d);

    // Method 2
    cout << format("{0:f}\n{0:.5f}\n{0:e}\n{0:g}", d);
}