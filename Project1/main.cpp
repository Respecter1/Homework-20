/*
	1. �������� ��������, ��� ����� ��'� ����� �� �������� ���������� ����� � ������� ���� ��� �������.
	�������� �������� ������ ��� �������,
	�� ����������� � ����,
	� ������� �� ����� ���� ������� ������� �� ������� ����� (����������� �� ���������� �������).
	����� ����������� �������� �������� ����.
*/


#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    char fileName[80];
    std::cout << "File name: ";
    std::cin>>fileName;
    std::ifstream fin(fileName); // ³�������� ���� ��� �������
    if (!fin.is_open()) {
        std::cerr << "Failed to open file text.txt\n";
        exit(1);//��������� 1 ���� ���� �����
    }

    char read[100];
    while (fin.getline(read, 100)) { // ������ ����� � �����
        for (int i = 0; read[i] != '\0'; ++i) { // ���������� ����� ������ � �����
            if (std::isprint(read[i])) { // ����������, �� � ������ ����������
                std::cout << read[i]; // �������� ������ �� �����, ���� �� ����������
            }
        }
    }

    fin.close(); // ��������� ����
    return 0;
}


