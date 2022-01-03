#include <iostream>

#include "addition.h"
#include "division.h"
#include "print_result.h"

int main()
{
float first_number, second_number, result_add, result_div;

std::cout<< "Enter first number\t";
std::cin>> first_number;
std::cout<< "Enter second number\t";
std::cin>> second_number;

result_add = addition( first_number , second_number );
result_div = division( first_number , second_number );

print_result("Addition", result_add);
print_result("Division", result_div);
//std::cout<< "Addition result:\t"<< result_add<< "\nDivision result:\t"<< result_div<< "\n";

return 0;

}
