<img width="787" height="197" alt="image" src="https://github.com/user-attachments/assets/f55bb758-07dd-4a03-8d62-89f3e60f7813" />
<img width="743" height="51" alt="image" src="https://github.com/user-attachments/assets/14024707-cf34-4d04-95d2-b824c08c5a41" />
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
<img width="1537" height="762" alt="image" src="https://github.com/user-attachments/assets/0beedac2-8799-4215-9390-7208ebd9cb21" />
<img width="724" height="72" alt="image" src="https://github.com/user-attachments/assets/7e2d6b2d-712e-499b-9c4a-a0829e40b087" />
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
<img width="1536" height="751" alt="image" src="https://github.com/user-attachments/assets/6ada6c3d-3909-41c5-af7c-612c1066e6c6" />
Під час виконання завдань було опрацьовано роботу з однозв'язними списками `std::forward_list` у C++: закріплено навички створення списку та додавання елементів через `push_front()`, обходу елементів у циклі, обчислення суми за умовою та добутку чисел від 1 до 10 (з урахуванням типу `long long`), а також видалення елементів за умовою за допомогою `remove_if()`.
