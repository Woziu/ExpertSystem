#include <cstdio>
#include <string>
#include "QuestionManager.h"

int main()
{
	QuestionManager manager;
	manager.addElement(Question((std::string)"purpose", std::string{ "Why do you want to learn?" }, { "For education", "To make money", "For my kids" }));
	manager.addElement(Question((std::string)"anyIdea", std::string{ "Do you have a brilliant idea/platform in mind?" }, { "No. Just want to get started", "Yes" }));
	while (!manager.isResultFound())
	{
		manager.askQuestion();
		manager.fetchUserAnswer();
		manager.getElementById(0).getAnswer();
		manager.checkResult();
		if (manager.isResultFound())
		{
			break;
		}
		//manager.selectNextQuestion();
	}
	manager.printResult();
	//manager.getElementById(0).getContent();

	return 0;
}