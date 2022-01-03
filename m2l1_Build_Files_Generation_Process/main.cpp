#include <iostream>

#include "addition.h"
#include "division.h"
#include "subtration.h"
#include "print_result.h"

int main(){

float first_no, second_no, result_add, result_div, result_sub;

std::cout<< "Enter first number\t";
std::cin>> first_no;
std::cout<< "Enter second number\t";
std::cin>> second_no;

result_add = addition(first_no , second_no);
result_div = division(first_no , second_no);
result_sub = subtration(first_no, second_no);

print_result("Addition", result_add);
print_result("Division", result_div);
print_result("subtration", result_sub);
//std::cout<< "Addition result:\t"<< result_add<< "\nDivision result:\t"<< result_div<< "\n";

return 0;

}
