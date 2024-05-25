#include <boost/type_index.hpp>
#include <iostream>

// auto : Let the compiler deduce the type

int main() {
  auto var1{12};
  auto var2{13.0};
  auto var3{14.0f};
  auto var4{15.0l};
  auto var5{'e'};

  // int modifier suffixes
  auto var6{123u};  // unsigned
  auto var7{123ul}; // unsigned long
  auto var8{123ll}; // long long

  std::cout
      << "var1: " << var1 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var1)>().pretty_name()
      << " | size: " << sizeof(var1) << " bytes" << std::endl;
  std::cout << "var2: " << var2;
  std::cout
      << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var1)>().pretty_name()
      << " | size: " << sizeof(var2) << " bytes" << std::endl;
  std::cout
      << "var3: " << var3 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var3)>().pretty_name()
      << " | size: " << sizeof(var3) << " bytes" << std::endl;
  std::cout
      << "var4: " << var4 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var4)>().pretty_name()
      << " | size: " << sizeof(var4) << " bytes" << std::endl;
  std::cout
      << "var5: " << var5 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var5)>().pretty_name()
      << " | size: " << sizeof(var5) << " bytes" << std::endl;
  std::cout
      << "var6: " << var6 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var6)>().pretty_name()
      << " | size: " << sizeof(var6) << " bytes" << std::endl;
  std::cout
      << "var7: " << var7 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var7)>().pretty_name()
      << " | size: " << sizeof(var7) << " bytes" << std::endl;
  std::cout
      << "var8: " << var8 << " | type: "
      << boost::typeindex::type_id_with_cvr<decltype(var8)>().pretty_name()
      << " | size: " << sizeof(var8) << " bytes" << std::endl;

  return 0;
}
