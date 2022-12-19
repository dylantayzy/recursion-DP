using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

bool Powersof2(int n) {
  if (n == 0) {
    return false;
  }
  if (n == 1) {
    return true;
  }
  if (n % 2 == 0) {
    return Powersof2(n/2);
  }
  return false;
}
int main() {
  if (Powersof2(33) == true) {
    cout << "nice";
  }
  if (Powersof2(33) == false) {
    cout << "not nice";
  }
}