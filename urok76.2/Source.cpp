/*
��������� ������������ ������ ����� �� 1 �� 9. ���� ������������ ������ ���-���� ������
� ��������� ��� ����� ������ ����� � ��� �� ��� ���, ���� �� �� ������ ���������� ��������
�� ��������� ���������. ��� ������ ������������ ������ ����� �� 1 �� 9, �������� ������ ��
�����. ����� ������� � ������� ������� � ������, ������� ���� ������������, � �������� ���
������.
*/
#include<iostream>

int vvod()
{
	int chislo;
	do
	{
		std::cout << "������� ����� �� 1 �� 9: ";
		std::cin >> chislo;
		if (std::cin.fail())
		
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		
	} while (chislo < 1 || chislo > 9);

	return chislo;
}


int main()
{
	setlocale(LC_ALL, "");
	int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	int vvedennoeChislo = vvod();
	int arraylength = sizeof(array) / sizeof(array[0]);
	int indexVvedennogoChisla{ 0 };
	std::cout << "������: ";
	for (int i{ 0 }; i < arraylength; ++i)
	{
		std::cout << array[i] << " ";
		if (vvedennoeChislo == array[i])
		{
			indexVvedennogoChisla = ++i;
		}
	}
	std::cout << "\n���������� ����� ���������� �����: " << indexVvedennogoChisla;
}