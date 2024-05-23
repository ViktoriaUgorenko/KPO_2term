#include <iostream>
#include <windows.h> 
using namespace std;

char f1(char c) {
    return c;
}
char f2(char c) {
    return c;
}

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //1-е задание
    int n, x, y, z;
    float s;
    cout << "Введите порядковый номер вашего варианта в списке: ";
    cin >> n;
    x = 9 + n;
    y = 10 + n;
    z = 11 + n;
    s = 1.0 + n;

    //2-е задание
    bool first_b = true; // true в C++ интерпретируется как 1, в шестнадцатеричной системе это 0x1
    bool second_b = false; // false в C++ интерпретируется как 0, в шестнадцатеричной системе это 0x0

    //3-е задание 
    char fio_en = 'g'; // символ 'g' в ASCII кодируется как 0x67
    char fio_ru = 'г'; // символ 'г' в ASCII кодируется как 0xffffd0b3

    //4-е задание 
    wchar_t wfio_en = L'u'; // символ 'u' в Unicode кодируется как 0x0075 
    wchar_t wfio_ru = L'у'; // символ 'у' в Unicode кодируется как 0x0443 

    //5-e задание
    short X = 16; // 22 в шестнадцатеричной системе это 16
    short negativeShort = -X; // -22 в шестнадцатеричной системе это -16
    short maxShort = SHRT_MAX; // максимальное значение short это 0x7fff
    short minShort = SHRT_MIN; // минимальное значение short это 0x8000
    unsigned short maxUnsignedShort = 0xFFFF; // максимальное беззнаковое short это 0xffff
    unsigned int minUnsignedInt = 0x0000; // минимальное беззнаковое int это 0x0000

    //6-e задание 
    int Y = 23; // 23 в шестнадцатеричной системе это 17
    int negativey = -Y; // -23 в шестнадцатеричной системе это -17
    int minint = 0x7fffffff; // максимальное значение int это 0x7fffffff
    int maxint = 0x80000000; // минимальное значение int это 0x80000000

    //7-е задание
    unsigned long maxulong = 0xffffffffffffffff; // максимальное беззнаковое long это 0xffffffffffffffff
    unsigned long minulong = 0x0; // минимальное беззнаковое long это 0x0

    //8-е задание
    long int Z = 24; //24 в шестнадцатеричной системе это 18
    long negativez = -Z; // -24 в шестнадцатеричной системе это -18
    long maxlong = 0x7fffffffffffffff; // максимальное значение long это 0x7fffffffffffffff
    long minlong = 0x000000000000000; // минимальное значение long это 0x000000000000000

    //9-е задание
    float S = 14.0f; //  0.10000001.11000000000000000000000
    float negativeS = -S;// 1.10000001.11000000000000000000000
    float positiveInf = S / 0;
    float negativeInf = negativeS / 0;
    float negativeInd = negativeInf + positiveInf;

    //10-е задание 
    char* pointerChar = &fio_en;
    wchar_t* pointerWChar = &wfio_en;
    short* pointerShort = &negativeShort;
    int* pointerInt = &n;
    float* pointerFloat = &negativeS;

    // Увеличиваем значения указателей на 3
    pointerChar += 3;
    pointerWChar += 3;
    pointerShort += 3;
    pointerInt += 3;
    pointerFloat += 3;

    char (*f[])(char) = { f1, f2 }; // Объявление массива указателей на функции и их инициализация

    char result = (*f[0])('a');
    char result1 = (*f[1])('b');

    return 0;
}