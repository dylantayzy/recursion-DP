using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

//printing out pascal's triangle
void generate(int numRows) {
  vector<vector<int>> triangle(numRows);
  triangle[0] = {1};
  for (int i=1; i<numRows; i++) {
    triangle[i].push_back(1);
    for (int j=1; j<i; j++) {
      triangle[i].push_back(triangle[i-1][j-1] + triangle[i-1][j]);
    }
    triangle[i].push_back(1);
  }
  for (int i=0; i<triangle.size(); i++) {
    for (int j=0; j<triangle[i].size(); j++) {
      cout << triangle[i][j] << " ";
    }
    cout << endl;
  }
}
  
int main() {
  generate(5);
  return 0;
}