#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); 

	int choose = 0, choose1 = 0, choosedrink = 0, choosemag = 0, money = 0, sum = 0, kol = 0, free = 0, sumdis = 0;
	double app = 70, ora = 60, abr = 50, gru = 75, fruitjustsum = 0;
	double tom = 40, oni = 30, cuc = 25;
	double gar = 40, pet = 30;
	double boya = 50, boyasum = 0, sum1 = 0;
	bool hawthornsum = false, fruitsum = false;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Магазин \"Соки Севы\" \n\n\n";
		std::cout << "1 - Войти в магазин\n";
		std::cout << "2 - Пройти на кассу\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choosemag;

		if (choosemag == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t\"Выберите категорию\" \n\n\n";
				std::cout << "1 - Фруктовые \n";
				std::cout << "2 - Овощные\n";
				std::cout << "3 - Чаи\n";
				std::cout << "4 - Настойки\n\n";
				std::cout << "0 - Выход на кассу\n\n";

				std::cout << "Сумма: " << sum << "\n";
				std::cout << "Ввод: ";
				std::cin >> choose1;

				while (true)
				{


					if (choose1 == 1)
					{

						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Фруктовые\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Яблочный " << app << "р\n";
						std::cout << "2 - Апельсиновый " << ora << "р\n";
						std::cout << "3 - Абрикосовый " << abr << "р\n";
						std::cout << "4 - Грушевый " << gru << "р\n";
						std::cout << "0 - Выход на кассу\n";
						std::cout << "Ввод: ";
						std::cin >> choosedrink;


					}
					else
					{
						break;
						Sleep(500);
					}
					if (choosedrink == 1)
					{
						std::cout << "\nВыбрано: 1 - Яблочный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (app * kol);
						fruitjustsum++;
						break;
					}
					else if (choosedrink == 2)
					{
						std::cout << "\nВыбрано: 2 - Апельсиновый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (ora * kol);
						fruitjustsum++;
						break;
					}
					else if (choosedrink == 3)
					{
						std::cout << "\nВыбрано: 3 - Абрикосовый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (abr * kol);
						fruitjustsum++;
						break;
					}
					else if (choosedrink == 4)
					{
						std::cout << "\nВыбрано: 4 - Грушевый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (gru * kol);
						fruitjustsum++;
						break;
					}
					else
					{
						break;
					}
				}




				if (fruitjustsum > 0 && !fruitsum )
				{
					fruitsum = true;

					if (hawthornsum)
					{
						sum -= boyasum;
						hawthornsum = false;
						boyasum = 0;

						system("cls");
						std::cout << "Покупка фруктового сока убрала боярышник\n";
						std::cout << "Деньги возвращены\n";
						std::cout << "Боярышник недоступен для покупки\n";
						Sleep(1500);
					}	


					else
					{
						std::cout << "\nПосле покупки фруктового сока боярышник недоступен.\n";
						Sleep(1500);
					}


				}
				




				while (true)
				{
					if (choose1 == 2)
					{
						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Овощные\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Томатный " << tom << "р\n";
						std::cout << "2 - Луковый " << oni << "р\n";
						std::cout << "3 - Огуречный " << cuc << "р\n";
						std::cout << "0 - Выход на кассу\n";
						std::cout << "Сумма: " << sum << "\n";
						std::cout << "Ввод: ";
						std::cin >> choosedrink;
					}
					else
					{
						break;
					}
					if (choosedrink == 1)
					{
						std::cout << "\nВыбрано: 1 - Томатный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (tom * kol);
						break;
					}
					else if (choosedrink == 2)
					{
						std::cout << "\nВыбрано: 2 - Луковый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						free = kol / 4;
						sum = sum + (oni * kol);
						sum = sum - (free * oni);
						if (free > 0)
						{
							std::cout << "Вам подарок от магазина\n";
						}
						else
						{
							std::cout << "Для скидки нужно 4 литра\n";
						}
						Sleep(1500);
						break;
					}

					else if (choosedrink == 3)
					{
						std::cout << "\nВыбрано: 3 - Огуречный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (cuc * kol);
						break;
					}
					else
					{
						break;
					}
				}





				while (true)
				{


					if (choose1 == 3)
					{
						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Чаи\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Чесночный " << gar << "р\n";
						std::cout << "2 - Петруший " << pet << "р\n";
						std::cout << "0 - Выход\n";
						std::cout << "Сумма: " << sum << "\n";
						std::cout << "Ввод: ";
						std::cin >> choosedrink;
					}
					else
					{
						break;
						Sleep(500);
					}
					if (choosedrink == 1)
					{
						std::cout << "\nВыбрано: 1 - Чесночный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (gar * kol);
						break;
					}
					else if (choosedrink == 2)
					{
						std::cout << "\nВыбрано: 2 - Петруший\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (pet * kol);
						break;
					}
					else
					{
						break;
					}
				}



				while (true)
				{
					if (choose1 == 4)
					{
						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Настойки\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Боярышник " << boya << "р\n";
						std::cout << "0 - Выход\n";
						std::cout << "Сумма: " << sum << "\n";
						std::cout << "Ввод: ";
						std::cin >> choosedrink;
					}
					else
					{
						break;
						Sleep(500);
					}
					if (choosedrink == 1)
					{
						if (fruitsum)
						{
							std::cout << "\nБоярышник недоступен, в корзине уже есть фруктовый сок\n";
							Sleep(1500);
							break;
						}
						
						else
						{
							std::cout << "\nВыбрано: 1 - Боярышник\n";
							std::cout << "Выберите кол-во: ";
							std::cin >> kol;
							sum1 = boya * kol;
							sum += sum1;
							boyasum = sum;
							hawthornsum = true;
							break;
						}
					}
				}


				if (choose1 == 0)
				{

					break;
				}


			}
		}
		else if (choosemag == 2)
		{
			system("cls");
			std::cout << "\t\t Оплатите товары: \n";
			std::cout << "1 - Наличные\n";
			std::cout << "2 - Карта\n";
			std::cin >> choose;

			if (choose == 1)
			{
				std::cout << "Введите сумму\n" << sum;
				std::cout << " Ввод: ";
				std::cin >> money;
				if (sum > 500)
				{
					sumdis = sum * 0.87;
					std::cout << "У вас скидка 13%\n";
					std::cout << "Общая сумма: " << sumdis << " р";
				}
				else
				{
					std::cout << "Общая сумма: " << sum << " р";
				}
				if (money == sum)
				{
					std::cout << "Спасибо за покупку!";
					break;
				}
				else
				{
					std::cout << "Некоректный ввод!";
					break;
				}
			}
			else if (choose == 2)
			{
				std::cout << "Введите сумму\n" << sum;
				std::cout << "Ввод: ";
				std::cin >> money;
				if (sum > 500)
				{
					sumdis = sum * 0.87;
					std::cout << "У вас скидка 13%\n";
					std::cout << "Общая сумма: " << sumdis << " р";
				}
				else
				{
					std::cout << "Общая сумма: " << sum << " р";
				}
				if (money == sum)
				{
					std::cout << " Спасибо за покупку!";
					break;
				}
				else
				{
					std::cout << "Некоректный ввод!";
					break;
				}
			}
			else
			{
				std::cout << "Ошибка!";
			}
		}
		else if (choosemag == 0)
		{
			system("cls");
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}

	}




	return 0;
}






/*int c , sum = 0;
	
	std::cout << "Вводите числа (0 завершить): ";
	while (true)
	{
		std::cin >> c && c ;
		sum += c;
		if (c == 0)
		{
			break;
		}
	}
	std::cout << "Сумма: " << sum;*/
	
/*int a = 0;

	do
	{
		std::cout << "\n=== МЕНЮ ===\n";
		std::cout << "1.Новая игра\n";
		std::cout << "2.Настройки\n";
		std::cout << "3.Выход\n"; 
		std::cout << "Выберите пункт: ";
		std::cin >> a;

		if (a < 1 || a > 3)
		{
			std::cout << "Попробуйте снова\n";
		}
	
	} while (a < 1 || a > 3);

	if (a == 1)
	{
		std::cout << "Выбрана новая игра\n ";
	}
	else if (a == 2)
	{
		std::cout << "Выбраны настройки\n ";
	}
	else
	{
		std::cout << "Выбран выход\n ";
	}*/



/*int c = 0;
	while (c < 5)
	{

		std::cout << "HEllo ";
		c++;

		if (c == 3)
		{
			continue; //break,continue
		}

		std::cout << "WOrld\n";
	}*/
/*int c = 0;

	do
	{

	} while (true);*/
/*for (int i = 0; i < 5; i++)
	{

		std::cout << 1 << i;

	}*/







