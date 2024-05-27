#include <iostream>
#include "Verparm.h"
#include <cstdarg>
using namespace std;

namespace Varparm {
    //������������ �������� ���� ����������,������� �� �������.
    int ivarparm(int n, ...) {
        if (n <= 0)
            return 0;

        int* ptri = &n + 1;
        int mul = 1;
        for (int i = 0; i < n; i++)
            mul *= *(ptri + i);

        return mul;
    }
    //������������ �������� ����������, ���������� � �������, ������� �� �������.
    int svarparm(short a, ...) {
        if (a <= 0)
            return 0;


        int* ptrs = (int*)(&a) + 1;
        int max = *ptrs;
        for (int i = 0; i < a; i++)
        {
            if (max < *(ptrs + i))
                max = *(ptrs + i);
        }

        return max;
    }
    //����� �������� ���� ����������, ������� � ������� �� �������������.
    double fvarparm(float b, ...)
    {
        if ( b== (double)FLT_MAX)
            return 0;

        double* ptrf = (double*)(&b + 1);
        double sum = b;
        for (int i = 0; *(ptrf + i) != (double)FLT_MAX; i++)
        {
            sum += *(ptrf + i);
        }

        return sum;
    }
    //����� �������� ���� ����������, ������� � ������� �� �������������.
    double dvarparm(double c, ...)
    {
        if (c == DBL_MAX)
            return 0;

        double* ptrd = &c;
        double sum = 0.0;
        for (int i = 0; *(ptrd + i) != DBL_MAX; i++) 
            sum += *(ptrd + i);

            return sum;
        
    }
}

int main()
{
    setlocale(0, "");
    //������������ �������� ���� ����������,������� �� �������.
    cout << "ivarparm" << endl;
    cout << Varparm::ivarparm(1, 5) << endl;
    cout << Varparm::ivarparm(2, 5, 6) << endl;
    cout << Varparm::ivarparm(3, 5, 6, 7) << endl;
    cout << Varparm::ivarparm(7, 1, 2, 3, 4, 5, 6, 7) << endl;

    //������������ �������� ����������, ���������� � �������, ������� �� �������.
    cout << endl << "svarpram" << endl;
    cout << Varparm::svarparm(1, 5) << endl;
    cout << Varparm::svarparm(2, 5, 6) << endl;
    cout << Varparm::svarparm(3, 5, 6, 7) << endl;
    cout << Varparm::svarparm(8, 1, 2, 3, 4, 5, 6, 7, 8) << endl;

    //����� �������� ���� ����������, ������� � ������� �� �������������.
    cout << endl << "fvarparm" << endl;
    cout << Varparm::fvarparm(FLT_MAX) << endl;
    cout << Varparm::fvarparm(5.0, FLT_MAX) << endl;
    cout << Varparm::fvarparm(5.0, 6.0, FLT_MAX) << endl;
    cout << Varparm::fvarparm(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, FLT_MAX) << endl;

    //����� �������� ���� ����������, ������� � ������� �� �������������.
    cout << endl << "dvarparm" << endl;
    cout << Varparm::dvarparm(DBL_MAX) << endl;
    cout << Varparm::dvarparm(5.0, DBL_MAX) << endl;
    cout << Varparm::dvarparm(5.0, 6.0, DBL_MAX) << endl;
    cout << Varparm::dvarparm(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, DBL_MAX) << endl;

    return 0;
}