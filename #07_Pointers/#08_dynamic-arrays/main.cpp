#include <bits/stdc++.h>
using namespace std;

/*
 * Arrays allocated on the heap with the new operator. Can also use the
 * std::nothrow version of new
 */

int main() {
  size_t size{10};

  // Different ways you can declare an array
  // dynamically and how they are initialized

  double *p_salaries{
      new double[size]}; // salaries array will contain garbage values

  int *p_students{new (nothrow) int[size]{}}; // All values initialized to 0

  double *p_scores{new (nothrow) double[size]{
      1, 2, 3, 4,
      5}}; // Allocating memory space for an array of size double vars. First 5
           // will be initialized with 1, 2, 3, 4, 5, and the rest will be 0's.

  // nullptr check and use the allocated array

  if (p_scores) {
    // Print out elements. Can use regular array access notation, or pointer
    // arithmetc
    // for (size_t i{}; i < size; ++i) {
    // cout << i << " value : " << p_scores[i] << " : " << *(p_scores + i)
    //<< endl;
    //}
  }

  // Releasing memory
  delete[] p_scores;
  p_scores = nullptr;

  delete[] p_students;
  p_students = nullptr;

  delete[] p_salaries;
  p_salaries = nullptr;

  /*
   * Pointers and arrays are different :
   * Pointer initialized with dynamic arrays are different from arrays :
   * std::size doesn't work on them, and they don't support range based for
   * loops
   */

  double *temperatures = new double[size]{10.0, 20.0, 30.0, 40.0, 50.0,
                                          60.0, 70.0, 80.0, 90.0, 100.0};

  // std::cout << "std::size(temperatures) : " << std::size(temperatures) <<
  // std::endl; // Error

  /*
   * Error : temperatures doesn't have array properties that are needed for the
   * range based for loop to work.
   */

  for (int i{0}; i < size; ++i) {
    cout << "temperature : " << temperatures[i] << endl;
  }

  // We say that the dynamically allocated array has decayed into a pointer

  return 0;
}
