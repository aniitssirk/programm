/*
 * main.cc
 *
 *  Created on: 22 ����. 2020 �.
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
				std::cout << "������������ ����!" << std::endl;
				goto re;
			}
			else if (not inps.eof()){
				std::cout << "���������� ������ � ����� �����" << std::endl;
				goto re;
			}
		}
		return result;
	}



	int read_int_in_range(const char * question, int min, int max)
	{
		int result;
		for(;;){
			result = read_int(question);
			if(result >=min and result <=max)
				return  result;
			std::cout << "����� ������ ���� � ��������� �� "<< min
					<< " �� "<< max << std::endl;

		}
	}


int main(){
	using clk = std::chrono::system_clock;
	//std::random_device rd;
	std::minstd_rand rnd{unsigned(clk::now().time_since_epoch().count())};
	std::uniform_int_distribution<> d {15,25};
	unsigned stone_count = d(rnd);
	//�������� ������ � ���-�� ������
	{std::cout << "� ���� " << stone_count << " ������" << std::endl;
	std::cout << "������ ��� �� ������ ����� �� ���� 1, 2 ��� 3 �����. �� ����� � �� �����." << std::endl;
	std::cout << std::endl;
	//����������, ������� ����� ������
	std::cout << "������� ������ �� ������?" << std::endl;
	int x = read_int("������� �����: ");
	int x = read_int_in_range("?", 1, std::min(3U, stones_cout));
	//��������� ����
	//���� 0 ������, �� ������ ��������, ����� ��� ����������
	//���� 1 ������, �� �������� ���������
	}



	for(unsigned i = 0; i < 10; i++)
		std::cout << d(rnd) << ' ';
	return 0;
}


