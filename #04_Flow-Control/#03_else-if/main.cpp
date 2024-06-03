#include <bits/stdc++.h>
using namespace std;

int main() {
  // Tools
  const int Pen{10};
  const int Marker{20};
  const int Eraser{30};
  const int Rectangle{40};
  const int Circle{50};
  const int Ellipse{60};

  int tool{Ellipse};

  if (tool == Pen) {
    cout << "Active tool is pen" << endl;
  } else if (tool == Marker) {
    cout << "Active tool is marker" << endl;
  } else if (tool == Eraser) {
    cout << "Active tool is eraser" << endl;
  } else if (tool == Rectangle) {
    cout << "Active tool is rectangle" << endl;
  } else if (tool == Circle) {
    cout << "Active tool is circle" << endl;
  } else if (tool == Ellipse) {
    cout << "Active tool is ellipse" << endl;
  }

  return 0;
}
