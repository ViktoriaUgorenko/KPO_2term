#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0, "rus");

    // ������ ������������� ������-������� ��� ��������� �����
    auto longerString = [](const string& str1, const string& str2) {
        if (str1.length() == str2.length()) {
            cout << "������ ���������� �����: " << str1.length() << endl;
            return string(); // ���������� ������ ������, ��� ��� ����� �����
        }
        cout << "����� ������� ������: ";
        return (str1.length() > str2.length()) ? str1 : str2;
        };

    string str1 = "ferfvdgtgtr", str2 = "aaa";
    auto result = longerString(str1, str2);
    if (!result.empty()) {
        cout << result << endl;
    }

    return 0;
}
