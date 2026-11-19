#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> intList;

    // Додаємо цілі числа до списку
    intList.push_front(3);
    intList.push_front(18);
    intList.push_front(2);
    intList.push_front(15);
    intList.push_front(10);
    intList.push_front(25);
    intList.push_front(4);
    intList.push_front(8);

    // Виводимо початковий список
    cout << "Початковий список цілих чисел: ";
    for (int num : intList) {
        cout << num << " ";
    }
    cout << endl;

    // Обчислюємо суму елементів, що більші або рівні 15
    int sumGe15 = 0;
    for (int num : intList) {
        if (num >= 15) {
            sumGe15 += num;
        }
    }
    cout << "Сума елементів (>= 15): " << sumGe15 << endl;

    // Видаляємо усі елементи, менші за 5
    intList.remove_if([](int num) { return num < 5; });

    // Виводимо список після видалення
    cout << "Список після видалення елементів (< 5): ";
    for (int num : intList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}