#include <iostream>
#include <string>

#include "fmt/core.h"

#include "Foo.h"
#include "SomeClass.h"


int main() {
    std::cout << "app1" << std::endl;

    SomeClass c;
    c.print();

    std::string s = fmt::format("fmt test: {}", 42);
    std::cout << s << std::endl;

    Foo f;
    f.bar();

    return 0;
}
