#include <iostream>


const short MIN_PRINT_NUMS_COUNT = 2;


/// @brief Печать в консоль чисел Фибоначчи
/// @param print_nums_count Кол-во чисел для вывода
void print_fibonacchi_numbers(const short &print_nums_count) {
    if(print_nums_count < MIN_PRINT_NUMS_COUNT) {
        std::cout << "Numbers count to print must be greater than 2" <<std::endl;
        return;
    }

    int first_num = 0;
    int second_num = 1;
    int sum = 0;

    std::cout << "Fibonacchi number 1: " << first_num << std::endl;
    std::cout << "Fibonacchi number 2: " << second_num << std::endl;

    for(int i = 2; i < print_nums_count; i++) {
        sum = first_num + second_num;
        first_num = second_num;
        second_num = sum;

        std::cout << "Fibonacchi number " << i + 1 << ": " << sum << std::endl;
    }
}

int main() {
    print_fibonacchi_numbers(5);
}
