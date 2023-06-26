#include <iostream>
#include <string>

int main() {
    std::string complex_num = "3+6i";
    size_t plus_pos = complex_num.find("+"); // find the position of the plus sign
    size_t i_pos = complex_num.find("i"); // find the position of the imaginary unit
    double real = std::stod(complex_num.substr(0, plus_pos)); // extract the real part as a double
    double imag = std::stod(complex_num.substr(plus_pos+1, i_pos-plus_pos-1)); // extract the imaginary part as a double
    double imag_conj = -imag; // calculate the conjugate of the imaginary part
    std::string conjugate = std::to_string(real) + " - " + std::to_string(imag_conj) + "i"; // format the result as a string
    std::cout << "The conjugate of " << complex_num << " is " << conjugate << std::endl;
    return 0;
}