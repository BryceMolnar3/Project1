#include <iostream>
#include <cstring>
int main() {
  std::string Program = "#include <iostream>#include <cstring>int main() {  std::string Program =   std::cout << Program.substr(0,19) << '\\n' << Program.substr(19,18) << '\\n' << Program.substr(37,12) << '\\n' << Program.substr(49,24) << '\"' << Program << '\"' << ';' << '\\n' << Program.substr(73,234) << '\\n' << Program.substr(307,3);};";
  std::cout << Program.substr(0,19) << '\n' << Program.substr(19,18) << '\n' << Program.substr(37,12) << '\n' << Program.substr(49,24) << '"' << Program << '"' << ';' << '\n' << Program.substr(73,234) << '\n' << Program.substr(307,3);
};
