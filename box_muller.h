#ifndef _BOX_MULLAR_H_
#define _BOX_MULLAR_H_

#include<random>
#include<cmath>

std::random_device seed_gen;
std::default_random_engine engine(seed_gen());
std::uniform_real_distribution<> dist(0.0, 1.0);
using namespace std;

inline double get_rand(void){
	return dist(engine);
}

inline double box_mullar(double x, double y, char flag){
	if(flag == 's') return sqrt(-2 * log(x)) * sin(2 * M_PI * y);
	else if(flag == 'c') return sqrt(-2 * log(x)) * cos(2 * M_PI * y);
}
#endif
