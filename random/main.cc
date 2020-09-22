/*
 * main.cc
 *
 *  Created on: 22 сент. 2020 г.
 *      Author: inform
 */

#include <random>
#include <iostream>
#include <chrono>
#include <sstream>


	int read_int(const char * question)
	{
		int result;
		std::string inp;
		re: std::cout << question;
		std::getline(std::cin, inp);
		{
			std::stringstream inps {inp};
			inps >> result;
			if (inps.fail()){
				std::cout << "Некорректный ввод!" << std::endl;
				goto re;

			}
		}
		return result;
	}

int main(){
	using clk = std::chrono::system_clock;
	//std::random_device rd;
	std::minstd_rand rnd{unsigned(clk::now().time_since_epoch().count())};
	std::uniform_int_distribution<> d {15,25};
	unsigned stone_count = d(rnd);
	//Сообщаем юзверю о кол-ве камней
	{std::cout << "В куче " << stone_count << " камней" << std::endl;
	std::cout << "Каждый ход вы можете взять из кучи 1, 2 или 3 камня. Не более и не менее." << std::endl;
	std::cout << std::endl;
	//Спрашиваем, сколько тянет юзверь
	std::cout << "Сколько камней Вы берете?" << std::endl;
	//Уменьшаем кучу
	//Если 0 камней, то юзверь проиграл, иначе ход компьютера
	//Если 1 камень, то проиграл компьютер
	}



	for(unsigned i = 0; i < 10; i++)
		std::cout << d(rnd) << ' ';
	return 0;
}


