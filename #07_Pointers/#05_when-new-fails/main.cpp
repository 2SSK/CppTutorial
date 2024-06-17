#include <bits/stdc++.h>
using namespace std;

/*
 * In some rare cases, the 'new' operator will fail to allocate dynamic memory
 * from the heap. When that happens, and you have no mechanism in place to
 * handle that failure, an exveption will be thrown and your program will crash.
 * BAD!
 */

int main() {
  // Try to allocate a insanely huge array in one go
  // Unhandled new failhure : Crash
  // int *lots_of_ints1{
  //  new int[1000000000000]}; // Max give an error about exceeding array size.

  /*
   * Use a huge loop to try and exhaust the memory capabilities of your system.
   * When new fails, your program is going to forcefuly terminate.
   */

  // for (size_t i{}; i < 1000000000000; ++i) {
  //  int *lots_of_ints2{new int[1000000000000]};
  //}

  /*
   * Checking for failed memory allocations :
   *    - Through the exception mechanism
   *    - The std::nothrow setting
   */

  // The exception mechanism : Handling the exception
  /*
   * Handle the problem in a way that makes sense for your application.
   * For example if you were trying to allocate memory to store color
   * information for your capplication, and allocation fails, you could opt for
   * showing some feedback message to the user, and rendering your app in
   * black/white.
   */
  for (size_t i{}; i < 10; ++i) {
    try {
      int *lots_of_ints3{new int[1000000000000]};
    } catch (exception &ex) {
      cout << i << " Cought exception ourselves : " << ex.what() << endl;
    }
  }

  // std::nothrow : ideal if you don't wnat exceptions thrown when new fails
  cout << endl;

  for (size_t i{}; i < 10; ++i) {
    int *lots_of_ints4{new (nothrow) int[1000000000000]};

    if (lots_of_ints4 == nullptr) {
      /*
       * Don't try to dreference and use lots_of_ints4 in here.
       * You'll get UB. No memory has really been allocated here.
       * It failed and returned nullptr becuase of the std::nothrow setting.
       */
      cout << i << " Failed to allocate memory" << endl;
    } else {
      cout << "Memory allocated successfully" << endl;
    }
  }

  return 0;
}
