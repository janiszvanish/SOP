#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

struct Zegar{
	int godzina;
	int minuta;
	int sekunda;
	
	Zegar(int godzina, int minuta, int sekunda);
	std::string toString();
	void next_hour();
	void next_minute();
	void next_second();
	
};
Zegar::Zegar(int godz, int min, int sek){
		godzina = godz;
		minuta = min;
		sekunda = sek;
		}

auto main() -> int{
	
	auto zegar = Zegar(23, 59, 59);
	std::cout<<zegar.toString();
	std::cout<<"\n";
	//zegar.next_hour();
	//zegar.next_minute();
	zegar.next_second();
	
	std::cout<<zegar.toString();
	std::cout<<"\n";
	
	return 0;
}

std::string Zegar::toString(){
	std::ostringstream out;
	out << std::setw(2) << std::setfill('0') << godzina << ":";
	out << std::setw(2) << std::setfill('0') << minuta << ":";
	out << std::setw(2) << std::setfill('0') << sekunda;
	
	return out.str();
	
}
void Zegar::next_hour(){
		godzina++;
		if(godzina == 24){
			godzina = 0;
		}
}
void Zegar::next_minute(){
	minuta++;
	if(minuta == 60){
			minuta = 0;
			next_hour();
	}
}
void Zegar::next_second(){
	sekunda++;
	if(sekunda == 60){
		sekunda = 0;
		next_minute();
	}
			
}
