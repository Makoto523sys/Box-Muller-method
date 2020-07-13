#ifndef _BOX_MULLAR_H_
#define _BOX_MULLAR_H_

#include<random>
#include<cmath>
#define sin_flag 0b0001
#define cos_flag 0b0010

std::random_device seed_gen;
std::default_random_engine engine(seed_gen());
std::uniform_real_distribution<> dist(0.0, 1.0);
using namespace std;

inline double get_rand(void){
	return dist(engine);
}

inline double box_mullar(double x, double y, int flag){
	if(sin_flag & flag) return sqrt(-2 * log(x)) * sin(2 * M_PI * y);
	else if(cos_flag & flag) return sqrt(-2 * log(x)) * cos(2 * M_PI * y);
}
#endif
