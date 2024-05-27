//#include "stdafx.h"
#include <iostream>
#include "Dictionary.h"

int Exercise1()
{
	try
	{
		Dictionary::Instance d1 = Dictionary::Create("�������������", 5);
		Dictionary::Entry e1 = { 1, "�������" }, e2 = { 2, "�������" },
			e3 = { 3,"������"}, e4 = { 4, "���������" }, e5 = { 5, "�����" };
		Dictionary::AddEntry(d1, e1);
		Dictionary::AddEntry(d1, e2);
		Dictionary::AddEntry(d1, e3);
		Dictionary::AddEntry(d1, e4);
		Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4);
		Dictionary::DelEntry(d1, 2);
		Dictionary::Entry newentry1 = { 6, "�����" };
		Dictionary::UpdEntry(d1, 3, newentry1);
		Dictionary::Print(d1);
		Dictionary::Instance d2 = Dictionary::Create("��������", 5);
		Dictionary::Entry s1 = { 1, "������" }, s2 = { 2, "������" },
			s3 = { 3, "�������" };
		Dictionary::AddEntry(d2, s1);
		Dictionary::AddEntry(d2, s2);
		Dictionary::AddEntry(d2, s3);
		Dictionary::Entry newentry3 = { 3, "��������" };
		Dictionary::UpdEntry(d2, 3, newentry3);
		Dictionary::Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (char* e)
	{
		std::cout << e << std::endl;
	};
	return 0;
}