#include <iostream>
#include <string>

using namespace std;

    typedef string Name;
    typedef string Course;
    typedef string Term;
    typedef int Lectures;

 // Описание структуры discipline
struct Discipline {

    Name nameOfDiscipline;
    Course numOfCourse;
    Term numOfTerm;
    Lectures numOfLectures;
};

 //Операция для вывода информации о дисциплине
ostream& operator<<(ostream& os, const Discipline& discipline) {
    os << "Название : " << discipline.nameOfDiscipline << endl;
    os << "Курс(на котором читается): " << discipline.numOfCourse << endl;
    os << "Семестр/семестры: " << discipline.numOfTerm << endl;
    os << "Количество лекций в семестре: " << discipline.numOfLectures << endl;
    return os;
}

// Операция для сравнения двух дисциплин по кол-ву лекций
bool operator<(const Discipline& discipline1, const Discipline& discipline2) {
    return discipline1.numOfLectures < discipline2.numOfLectures;
}

int main() {
    setlocale(LC_ALL, "rus");
    // Информация о дисциплинах
    Discipline  discipline1 = { "КПО", "1, 2", "2,3", 54 };
    Discipline  discipline2 = { "ОАИП", "1", "1,2" ,72};

    // Вывод информации о дисциплинах 
    cout << "Информация о дисциплине 1:" << endl;
    cout << discipline1 << endl;
    cout << "Информация о дисциплине 2:" << endl;
    cout << discipline2 << endl;

    // Сравнение дисциплин по кол-ву лекций
    if (discipline1 < discipline2) {
        cout << "Дисциплина 1 имеет меньшее число лекций." << endl;
    }
    else {
        cout << "Дисциплина 2 имеет меньшее число лекций." << endl;
    }
    return 0;
}
