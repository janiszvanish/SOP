#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>


struct Student{
	std::string imie;
	std::string nazwisko;
	int index;
	int semestr;
	double srednia;
	
	Student(std::string imie, std::string nazwisko, int index, int semestr, double srednia);
	std::string toString();
	
};
Student::Student(std::string im, 
	std::string nazw, 
	int ind, 
	int sem, 
	double sr){
		imie = im;
		nazwisko = nazw;
		index = ind;
		semestr = sem;
		srednia = sr;
		}

auto main() -> int{
	
	auto student1 = Student("Klaudia", "kkak", 21393, 4, 5.0);
	std::cout<<student1.toString();
	
	return 0;
}

std::string Student::toString(){
	std::string index_string = std::to_string(index);
	std::string semester_string = std::to_string(semestr);
	std::string srednia_string = std::to_string(srednia);
	
	/*index_stringstream << index;
	semester_stringstream << semestr;
	srednia_stringstream << srednia;
	
	index_string >> index_stringstream;
	semester_string >> semester_stringstream;
	srednia_string >> srednia_stringstream;*/
	
	return "Hello " + imie + " " + nazwisko + "\nyour index: " + index_string +
	"\nyou are on " + semester_string + " semester\n" + "your grades: " + srednia_string + ":)) \n";
}
