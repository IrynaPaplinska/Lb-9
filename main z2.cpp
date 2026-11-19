#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> numberList;

    // Додаємо натуральні числа від 1 до 10 до списку
    // (додаємо у зворотному порядку, щоб у списку вони йшли від 1 до 10)
    for (int i = 10; i >= 1; i--) {
        numberList.push_front(i);
    }

    // Виводимо список натуральних чисел
    cout << "Список натуральних чисел від 1 до 10: ";
    for (int number : numberList) {
        cout << number << " ";
    }
    cout << endl;

    // Обчислюємо добуток усіх елементів списку
    long long product = 1;
    for (int number : numberList) {
        product *= number;
    }

    cout << "Добуток усіх елементів списку: " << product << endl;

    return 0;
}