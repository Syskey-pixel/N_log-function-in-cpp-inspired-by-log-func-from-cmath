#ifndef n_log_hpp
#define n_log_hpp
#include "n_exp.hpp"
template<typename thing1,typename thing2>
auto n_log(thing1 base,thing2 expo){
	thing1 c=1.0;
	while(base!=expo){
	if(n_exp(base,c)!=expo){
		c++;
		}
	if(n_exp(base,c)==expo){
		return c;
		}
	}
	return 0;
	}
#endif