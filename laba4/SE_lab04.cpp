#include <iostream>
#include <string>

using namespace std;

    typedef string Name;
    typedef string Course;
    typedef string Term;
    typedef int Lectures;

 // �������� ��������� discipline
struct Discipline {

    Name nameOfDiscipline;
    Course numOfCourse;
    Term numOfTerm;
    Lectures numOfLectures;
};

 //�������� ��� ������ ���������� � ����������
ostream& operator<<(ostream& os, const Discipline& discipline) {
    os << "�������� : " << discipline.nameOfDiscipline << endl;
    os << "����(�� ������� ��������): " << discipline.numOfCourse << endl;
    os << "�������/��������: " << discipline.numOfTerm << endl;
    os << "���������� ������ � ��������: " << discipline.numOfLectures << endl;
    return os;
}

// �������� ��� ��������� ���� ��������� �� ���-�� ������
bool operator<(const Discipline& discipline1, const Discipline& discipline2) {
    return discipline1.numOfLectures < discipline2.numOfLectures;
}

int main() {
    setlocale(LC_ALL, "rus");
    // ���������� � �����������
    Discipline  discipline1 = { "���", "1, 2", "2,3", 54 };
    Discipline  discipline2 = { "����", "1", "1,2" ,72};

    // ����� ���������� � ����������� 
    cout << "���������� � ���������� 1:" << endl;
    cout << discipline1 << endl;
    cout << "���������� � ���������� 2:" << endl;
    cout << discipline2 << endl;

    // ��������� ��������� �� ���-�� ������
    if (discipline1 < discipline2) {
        cout << "���������� 1 ����� ������� ����� ������." << endl;
    }
    else {
        cout << "���������� 2 ����� ������� ����� ������." << endl;
    }
    return 0;
}
