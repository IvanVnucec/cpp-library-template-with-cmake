#include "MyLibrary/MyLibrary.h"
#include <exception>
#include <iostream>


int main()
{
  try {
    if(!MyLibrary::public_func()) {
      std::cout << "That is really unexpected ;-)\n";
    }
  }
  catch (const std::exception& ex) {
    std::cerr << "Unhandled std exception caught: " << ex.what() << '\n';
  }
  catch (...) {
    std::cerr << "Unhandled unknown exception caught\n";
  }
}