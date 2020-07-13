#include<iostream>
#include<fstream>
#include<iomanip>
#include"box_mullar.h"
const int N = 1000;

int main(void){
	std::ofstream out{"box_mullar.txt"};
	double x, y, z1, z2;
	for(int i = 0; i < N; i++){
		x = get_rand();
		y = get_rand();
		z1 = box_mullar(x, y, 'c');
		z2 = box_mullar(x, y, 's');
		out << z1 << " " << z2 << std::endl;
	}
	out.close();
	return 0;
}
