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

  int tool{Pen};

  cout << endl;

  switch (tool) {
  case Pen:
    cout << "Active tool is pen" << endl;
    break;
  case Marker:
    cout << "Active tool is marker" << endl;
    break;
  case Eraser:
    cout << "Active tool is eraser" << endl;
    break;
  case Rectangle:
    cout << "Active tool is rectangle" << endl;
    break;
  case Circle:
    cout << "Active tool is circle" << endl;
    break;
  case Ellipse:
    cout << "Active tool is ellipse" << endl;
    break;
  default:
    cout << "Can't match any tool" << endl;
  }

  cout << "Moving on" << endl;

  return 0;
}
