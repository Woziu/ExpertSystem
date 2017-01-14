#include <cstdio>
#include <string>
#include "QuestionManager.h"

int main(){
	QuestionManager manager;

	manager.addElement(Question((std::string)"purpose", std::string{ "Why do you want to learn?" }, { "education", "make money", "for my kids" }));
	manager.getElementById(0).getContent();

	return 0;
}