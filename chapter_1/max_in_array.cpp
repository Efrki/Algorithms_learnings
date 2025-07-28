#include <string>
#include <vector>
#include <iostream>

template<typename T>
T findLargest(std::vector<T> vec){
    T largest = vec[0];

    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] > largest) {
            largest = vec[i];
        }
    }

    return largest;
}

int main(void){
    std::vector<int> integ = {0,123,3,654,46,234,312,78};
    std::vector<char> charac = {'A','b','y','Z'};
    std::vector<std::string> str = {"ASNDF", "dnfshbdfj", "ifusdfgyuojf", "qwertyuiop;lkjhgfdsazxcvbnm,"};

    std::cout << "Answer 1: " << findLargest(integ) << std::endl;
    std::cout << "Answer 2: " << findLargest(charac) << std::endl;
    std::cout << "Answer 3: " << findLargest(str) << std::endl;

    return 0;
}
/*
    Привет всем, это первый алгоритм который Род Стивенс разобрал в своем учебнике. В целом тут разбирать нечего:
    Стоит задача найти самый большой элемент в массиве (необязательно отсортированном), поэтому наш алгоритм такой:
        1. Создаем переменную largest, которая хранит в себе первый элемент массива.
        2. В цикле мы сравниваем largest с оставшимеся элементами.
        3. Если последующий элемент больше largest, то largest становится им.
        4. Иначе largest остаётся таким же.
        5. Повторяем шаги 2-4 до конца цикла.
*/