#ifndef n_exp_hpp
#define n_exp_hpp
template <typename thing1,typename thing2>
auto n_exp(thing1 a,thing2 b){
	thing1 c=a;
	thing1 r;
	for(auto f=0;f<(b-1);f++){
	    r=c*=a;
		}
	return r;
	}
#endif