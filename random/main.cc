/*
 * main.cc
 *
 *  Created on: 22 ����. 2020 �.
 *      Author: inform
 */

#include <random>
#include <iostream>
#include <chrono>

int main(){
	using clk = std::chrono::system_clock;
	//std::random_device rd;
	std::minstd_rand rnd{unsigned(clk::now().time_since_epoch().count())};
	std::uniform_int_distribution<> d {15,25};
	unsigned stone_count = d(rnd);
	//�������� ������ � ���-�� ������
	do {std::cout << "� ���� " << stone_count << " ������" << std::endl;
	std::cout << "������ ��� �� ������ ����� �� ���� 1, 2 ��� 3 �����. �� ����� � �� �����." << std::endl;
	std::cout << std::endl;
	//����������, ������� ����� ������
	std::cout << "������� ������ �� ������?" << std::endl;
	//��������� ����
	//���� 0 ������, �� ������ ��������, ����� ��� ����������
	//���� 1 ������, �� �������� ���������
	} while(true);



	for(unsigned i = 0; i < 10; i++)
		std::cout << d(rnd) << ' ';
	return 0;
}


