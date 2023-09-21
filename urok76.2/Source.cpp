/*
Попросите пользователя ввести число от 1 до 9. Если пользователь введет что-либо другое
— попросите его снова ввести число и так до тех пор, пока он не введет корректное значение
из заданного диапазона. Как только пользователь введет число от 1 до 9, выведите массив на
экран. Затем найдите в массиве элемент с числом, которое ввел пользователь, и выведите его
индекс.
*/
#include<iostream>

int vvod()
{
	int chislo;
	do
	{
		std::cout << "Введите число от 1 до 9: ";
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
	std::cout << "Массив: ";
	for (int i{ 0 }; i < arraylength; ++i)
	{
		std::cout << array[i] << " ";
		if (vvedennoeChislo == array[i])
		{
			indexVvedennogoChisla = ++i;
		}
	}
	std::cout << "\nПорядковый номер введенного числа: " << indexVvedennogoChisla;
}