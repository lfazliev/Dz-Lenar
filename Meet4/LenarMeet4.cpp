//Всё что смог осилить, задание встреча номер пять по времени не успеваю доделать, тут не понимаю как использовать конструкотор копирования и как правильно организовать вывод данных
#include <iostream>
#include <vector>
#include <string>
class people
{

public:
	std::string firstname, gender;
	int age;
	people()
	{
		std::cout << "\nВведите возраст жителя - ";
		std::cin >> age;
		std::cout << "\nВведите имя жителя - ";
		std::cin >> firstname;
		std::cout << "\nВведите пол жителя - ";
		std::cin >> gender;
		std::cout << "constr p ";
	}
	people(const people& pep) :
		age(pep.age), firstname(pep.firstname), gender(pep.gender)
	{
		std::cout << "Конст копир<>\n";
	}

};
class flat
{
public:
	int rooms;
	std::string viewind;
	people* chel;
	flat()
	{
		int A;
		std::cout << "\nСколько жителей в квартире ? - ";
		std::cin >> A;
		std::cout << "\nКакой вид из окна? - ";
		std::cin >> viewind;
		std::cout << "\nСколько комнат в квартире ? - ";
		std::cin >> rooms;
		chel = new people[A];
		std::cout << "constr f ";

	}

	flat(const flat& flt) :
		rooms(flt.rooms), viewind(flt.viewind), chel(flt.chel)
	{
		std::cout << "Конст копир<>\n";
	}
	~flat()
	{
		delete[]chel;
		chel = NULL;
		std::cout << " деконстр квартира\n";
	}
};
class house
{
public:
	int floor;
	std::string material;
	flat* fef;
	house()
	{
		int A;
		std::cout << "\nСколько квартир в доме? - ";
		std::cin >> A;
		std::cout << "\nСколько этажей в доме? - ";
		std::cin >> floor;
		std::cout << "\nИз какого материала сделан дом? - ";
		std::cin >> material;
		fef = new flat[A];
		std::cout << "constr h ";
	}
	house(const house& hse) :
		floor(hse.floor), material(hse.material), fef(hse.fef)
	{
		std::cout << "Конст копир<>\n";
	}
	~house()
	{
		delete[]fef;
		fef = NULL;
		std::cout << " деконстр дом\n";
	}
};

int main()
{
	system("chcp 1251");
	int A;
	std::cout << "Сколько многоквартирных домов вы хотите создать? - ";
	std::cin >> A;
	std::vector<house>dd(A);



}
