#include <iostream>

/*
 * signed used to store number of range [-2^(n-1)  ~ 2^(n-1) - 1]
 * unsigned used to store number of range [0 ~ 2^n - 1]
 */

int main() {
  short short_var{-32768}; // 2 Bytes
  short int short_int{455};
  signed short signed_short{122};
  signed short int signed_short_int{-456};
  unsigned short int unsigned_short_int{456};

  std::cout << "short var: " << short_var << "| size: " << sizeof(short_var)
            << " bytes" << std::endl;
  std::cout << "short int: " << short_int << "| size: " << sizeof(short_int)
            << " bytes" << std::endl;
  std::cout << "signed short: " << signed_short
            << "| size: " << sizeof(signed_short) << " bytes" << std::endl;
  std::cout << "signed short int: " << signed_short_int
            << "| size: " << sizeof(signed_short_int) << " bytes" << std::endl;
  std::cout << "unsigned short int: " << unsigned_short_int
            << "| size: " << sizeof(unsigned_short_int) << " bytes"
            << std::endl;

  int int_var{55}; // 4 Bytes
  signed signed_var{66};
  signed int signed_int{77};
  unsigned int unsigned_int{88};

  std::cout << "int var: " << int_var << "  | size: " << sizeof(int_var)
            << " bytes" << std::endl;
  std::cout << "signed var: " << signed_var
            << "  | size: " << sizeof(signed_var) << " bytes" << std::endl;
  std::cout << "signed int: " << signed_int
            << "  | size: " << sizeof(signed_int) << " bytes" << std::endl;
  std::cout << "unsigned int: " << unsigned_int
            << "  | size: " << sizeof(unsigned_int) << " bytes" << std::endl;

  long long_var{88}; // 4 OR 8 Bytes
  long int long_int{33};
  signed long signed_long{44};
  signed long int signed_long_int{55};
  unsigned long int unsigned_long_int{66};

  std::cout << "long var: " << long_var << "  | size: " << sizeof(long_var)
            << " bytes" << std::endl;
  std::cout << "long int: " << long_int << "  | size: " << sizeof(long_int)
            << " bytes" << std::endl;
  std::cout << "signed long: " << signed_long
            << "  | size: " << sizeof(signed_long) << " bytes" << std::endl;
  std::cout << "signed long int: " << signed_long_int
            << "  | size: " << sizeof(signed_long_int) << " bytes" << std::endl;

  long long long_long{888}; // 8 Bytes
  long long int long_long_int{999};
  signed long long signed_long_long{444};
  signed long long int signed_long_long_int{1234};
  unsigned long long int unsigned_long_long_int{5678};

  std::cout << "long long: " << long_long << "  | size: " << sizeof(long_long)
            << " bytes" << std::endl;
  std::cout << "long long int: " << long_long_int
            << "  | size: " << sizeof(long_long_int) << " bytes" << std::endl;
  std::cout << "signed long long: " << signed_long_long
            << "  | size: " << sizeof(signed_long_long) << " bytes"
            << std::endl;
  std::cout << "signed long long int: " << signed_long_long_int
            << "  | size: " << sizeof(signed_long_long_int) << " bytes"
            << std::endl;
  std::cout << "unsigned long long int: " << unsigned_long_long_int
            << "  | size: " << sizeof(unsigned_long_long_int) << " bytes"
            << std::endl;

  return 0;
}
