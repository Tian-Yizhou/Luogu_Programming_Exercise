/*
 * @Author: Hannah
 * @Date: 2026-04-22 23:47:32
 * @LastEditTime: 2026-04-22 23:52:44
 */
#include <iostream>
#include <format>

using namespace std;

int main() {
   char c;
   int num;
   float f;
   double d;

   cin >> c >> num >> f >> d;

   cout << format("{0} {1} {2:.6f} {3:.6f}", c, num, f, d); 
}