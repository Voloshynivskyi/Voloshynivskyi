#include <iostream>
#include <Windows.h>
using namespace std;
unsigned int pidrahunoksliv(const char* ryadok, unsigned int dovzina);
unsigned int pidahunokprobiliv(const char* ryadok, unsigned int dovzina, unsigned int potribnadovzina);
char* osnova(const char* ryadok, unsigned int dovzina, unsigned int potribnadovzina);
int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "ru");
	unsigned int dovzina = 200;
	unsigned int potribnadovzina = 60;
	char* vvid = new char[dovzina];

	printf("Введiть рядок: \n");
	cin.getline(vvid, 100);
	if (strlen(vvid) > potribnadovzina)
	{
		SetConsoleTextAttribute(h, (0 << 0) + 4);
		printf("Помилка! Довжина рядка повинна бути менше за ");
		cout << potribnadovzina + 1;
		SetConsoleTextAttribute(h, (0 << 0) + 7);
		printf("\n");
		system("pause");
		return 0;
	}
	else {}
	if (pidrahunoksliv(vvid, strlen(vvid)) < 2)
	{
		SetConsoleTextAttribute(h, (0 << 0) + 4);
		printf("Помилка! Замало слiв!");
		SetConsoleTextAttribute(h, (0 << 0) + 7);
		printf("\n");
		system("pause");
		return 0;
	}
	char* rezultat = osnova(vvid, strlen(vvid), potribnadovzina);
	unsigned int kilkistsliv = pidrahunoksliv(vvid, strlen(vvid));
	printf("Отриманий рядок: \n");
	printf(rezultat);
	printf("\n");
	SetConsoleTextAttribute(h, (0 << 0) + 10);
	printf( "Кiлькiсть доданих пробiлiв: ");
	cout << potribnadovzina - strlen(vvid);
	SetConsoleTextAttribute(h, (0 << 0) + 7);
	printf("\n");
	system("pause");
	delete[] rezultat;
	delete[] vvid;
}

unsigned int pidrahunoksliv(const char* ryadok, unsigned int dovzina)
{
	unsigned int pidrahunok = 0;
	for (size_t i = 0; i < dovzina; i++)
	{
		if (ryadok[i] == ' ') { pidrahunok++; }
		else {}
	}
	return pidrahunok + 1;
}

char* osnova(const char* ryadok, unsigned int dovzina, unsigned int potribnadovzina)
{
	unsigned int kilkistsliv = pidrahunoksliv(ryadok, dovzina);

	unsigned int probili = (unsigned int)((pidahunokprobiliv(ryadok, dovzina, potribnadovzina)) / (kilkistsliv - 1));
	unsigned int pamyat = potribnadovzina - (probili * (kilkistsliv - 1)) - dovzina + kilkistsliv - 1;

	char* rezultat = new char[potribnadovzina + 1]{};

	for (size_t ryadok_pokaznik = 0, rezultat_pokaznik = 0; ryadok_pokaznik < dovzina; ryadok_pokaznik++)
	{
		if (ryadok[ryadok_pokaznik] != ' ')
		{
			rezultat[rezultat_pokaznik] = ryadok[ryadok_pokaznik];
			rezultat_pokaznik++;
		}
		else
		{
			unsigned int kilkist_probili = probili;
			if (pamyat > 0)
			{
				kilkist_probili++;
				pamyat--;
			}
			else {}

			for (size_t i = 0; i < kilkist_probili; i++)
			{
				rezultat[rezultat_pokaznik + i] = ' ';
			}
			rezultat_pokaznik += kilkist_probili;
		}
	}

	return rezultat;
}

unsigned int pidahunokprobiliv(const char* ryadok, unsigned int dovzina, unsigned int potribnadovzina)
{
	unsigned int kilkistsliv = pidrahunoksliv(ryadok, dovzina);
	return potribnadovzina - dovzina + kilkistsliv - 1;
}
