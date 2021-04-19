#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>


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
	zegar.next_hour();
	zegar.next_minute();
	zegar.next_second();
	
	std::cout<<zegar.toString();
	
	return 0;
}

std::string Zegar::toString(){
	std::string godzina_string = std::to_string(godzina);
	std::string minuta_string = std::to_string(minuta);
	std::string sekundaa_string = std::to_string(sekunda);
	
	if(godzina == 24){
		godzina = 0;
		godzina_string = "00";
	}
	if(minuta == 60){
		minuta = 0;
		minuta_string = "00";
	}
	if(sekunda == 60){
		minuta = 0;
		sekundaa_string = "00";
	}
	
	return "Jest godzina: " + godzina_string + ":" + minuta_string + ":" + sekundaa_string + "\n";
}
void Zegar::next_hour(){
		godzina++;
		if(godzina == 24)
			std::cout<<"Nastepna godzina to 0\n";
		else if(godzina > 24)
			std::cout<<"Nastepna godzina to 1\n";
		else
			std::cout<<"Nastepna godzina to " + godzina;
}
void Zegar::next_minute(){
	minuta++;
	if(minuta == 60)
			std::cout<<"Nastepna minuta to 0\n";
		else if(minuta > 60)
			std::cout<<"Nastepna godzina to 1\n";
		else
			std::cout<<"Nastepna godzina to " + minuta;
}
void Zegar::next_second(){
	sekunda++;
	if(sekunda == 60)
			std::cout<<"Nastepna sekunda to 0\n";
		else if(sekunda > 60)
			std::cout<<"Nastepna sekunda to 1\n";
		else
			std::cout<<"Nastepna sekunda to " + sekunda;
}
