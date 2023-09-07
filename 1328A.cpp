#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    int a,b;
    int conta=0;
    cin >> a >> b;
    int next_multiple = ((a + b - 1) / b) * b;
    conta += next_multiple - a;
    cout << conta << endl;
  }
}