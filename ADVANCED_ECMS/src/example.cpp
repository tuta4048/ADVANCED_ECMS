#include <iostream>
#include <optimizer.hpp>
#include <math.h>
#include <data_loader.hpp>
#include <ICEMG.hpp>
#include <typeinfo>  // typeid::name operator

// getcwd
// #include <unistd.h>
// std::string GetCurrentWorkingDir( void ) {
//   char buff[FILENAME_MAX];
//   getcwd( buff, FILENAME_MAX );
//   std::string current_working_dir(buff);
//   return current_working_dir;
// }

using namespace std;
using namespace LBK;

int main(){

	float intep_soc = Est_Tool::interpolate_1d(MG::Bat_indexSoc, MG::Bat_indexVoc, 
		MG::SOC, false);
	float lambda = 0.1;
	float tau = 1/pow(lambda,2);
	float iter = 100.;
	VehicleInfo vehicle_info;
	// Optimizer bird(lambda, tau, iter);
	cout << intep_soc << endl;
}