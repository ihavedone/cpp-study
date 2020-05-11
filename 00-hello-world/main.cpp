#include <iostream>
#include "version.h"

int main(){
	std::cout<<"Hello world!";
	std::cout<<" Version: "<<test::getVersion();
	return 0;
}