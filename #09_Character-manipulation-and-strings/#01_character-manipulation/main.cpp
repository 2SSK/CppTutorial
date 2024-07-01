#include <bits/stdc++.h>
using namespace std;

int main() {
  // Check if character is alphanumeric
  cout << endl;
  cout << "std::isalnum : " << endl;

  cout << "C is alphanumeric : " << isalnum('C') << endl;
  cout << "^ is alphanumeric : " << isalnum('^') << endl;

  // Can use this as a test condition
  char input_char{'*'};
  if (isalnum(input_char)) {
    cout << input_char << " is alphanumeric." << endl;
  } else {
    cout << input_char << " is not alphanumeric." << endl;
  }

  // Check if character is blank
  cout << endl;
  cout << "std::isblank : " << endl;
  char message[]{"Hello there. How are you doing? The sun is shining."};
  cout << "message : " << message << endl;

  // Find and print blank index
  int blank_count{};

  for (size_t i{0}; i < size(message); ++i) {
    if (isblank(message[i])) {
      cout << "Found a blank character at index : [" << i << "]" << endl;
      ++blank_count;
    }
  }

  cout << "In total we found " << blank_count << " blank characters." << endl;

  // Check if character is lowercase or uppercase
  cout << endl;
  cout << "\nstd::islower and std::isupper : " << endl;

  char thought[]{
      "The C++ Programming Lanuage is one of the most used on the Planet"};
  int lower_count{};
  int upper_count{};

  // Print original string for ease of comparison on the terminal
  cout << "Original string : " << thought << endl;

  for (auto character : thought) {
    if (islower(character)) {
      cout << " " << character;
      ++lower_count;
    }

    if (isupper(character)) {
      ++upper_count;
    }
  }

  cout << endl;
  cout << "Found " << lower_count << " lowercase characters and " << upper_count
       << " uppercase characters." << endl;

  // Check if a character is a digit
  cout << endl;
  cout << "std::isdigit : " << endl;

  char statement[]{
      "Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
  cout << "statement : " << statement << endl;

  int digit_count{};

  for (auto charcter : statement) {
    if (isdigit(charcter)) {
      cout << "Found a digit : " << charcter << endl;
      ++digit_count;
    }
  }
  cout << "Found " << digit_count << " digits in the statement string" << endl;

  // Turning a character to lowercase using the std::tolower() function
  cout << endl;
  cout << "std::tolower and std::toupper : " << endl;
  char original_str[]{"Home. The feeling of belonging."};
  char dest_str[std::size(original_str)];

  // Turn this to uppercase. Change the array in place
  for (size_t i{}; i < size(original_str); ++i) {
    dest_str[i] = toupper(original_str[i]);
  }

  cout << "Original string : " << original_str << endl;
  cout << "uppercase string : " << dest_str << endl;

  // Turn this to lowercase. Change the array in place
  for (size_t i{}; i < size(original_str); ++i) {
    dest_str[i] = tolower(original_str[i]);
  }

  cout << "lowercase string : " << dest_str << endl;

  return 0;
}
