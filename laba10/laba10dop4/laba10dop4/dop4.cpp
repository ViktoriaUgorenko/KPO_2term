#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0, "rus");

    // пример использования лямбда-функции для сравнения строк
    auto longerString = [](const string& str1, const string& str2) {
        if (str1.length() == str2.length()) {
            cout << "Строки одинаковой длины: " << str1.length() << endl;
            return string(); // Возвращаем пустую строку, так как длины равны
        }
        cout << "Более длинная строка: ";
        return (str1.length() > str2.length()) ? str1 : str2;
        };

    string str1 = "ferfvdgtgtr", str2 = "aaa";
    auto result = longerString(str1, str2);
    if (!result.empty()) {
        cout << result << endl;
    }

    return 0;
}
