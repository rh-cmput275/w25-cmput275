#include <iostream>
using namespace std;
struct Foo {
  int x, y;
  Foo(int yp) : y{-2*yp}, x{y} {}
};


int main() {
  Foo f(10);
  cout << f.x << " " << f.y << endl;
}
