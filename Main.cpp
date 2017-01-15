#include <cstdio>
#include <string>
#include "QuestionManager.h"

int main()
{
	QuestionManager manager;
	manager.addElement(Question((std::string)"purpose", std::string{ "Why do you want to learn?" }, 
		{ "For education", "To make money", "For my kids" }));
	manager.addElement(Question((std::string)"anyIdea", std::string{ "Do you have a brilliant idea/platform in mind?" }, 
		{ "No. Just want to get started", "Yes" }));
	manager.addElement(Question((std::string)"learningWay", std::string{ "What way do you prefer to learn thins?" },
		{ "Easy way", "The slightly harder way", "The really hard way (but easier to pick up other languages in the future)" }));
	manager.addElement(Question((std::string)"carMode", std::string{ "Do you prefer auto or manual car?" },
		{ "Auto", "Manual" }));
	manager.addElement(Question((std::string)"moneyWay", std::string{ "How do you want to make money?" },
		{ "I want to get a job", "I have a startup idea" }));
	manager.addElement(Question((std::string)"startupField", std::string{ "Which platform/field?" },
		{ "Web", "Enterprise", "Mobile", "3D/Gaming" }));
	manager.addElement(Question((std::string)"realTime", std::string{ "Does your web app provides info in real-time, like Twitter?" },
		{ "Yes", "No" }));
	manager.addElement(Question((std::string)"mobileOS", std::string{ "Which OS?" },
		{ "iOS", "Android" }));
	manager.addElement(Question((std::string)"aboutMS", std::string{ "What do you think about Microsoft?" },
		{ "I dont like it", "I`m a fan" }));
	manager.addElement(Question((std::string)"somethingNew", std::string{ "Do you want to try something new with huge potential, but less mature?" },
		{ "Yes", "No", "Not sure" }));
	manager.addElement(Question((std::string)"toy", std::string{ "Which one is your favourite toy?" },
		{ "Lego", "Play-Doh", "I have an old & ugly toy, but I love it so much" }));
	manager.addElement(Question((std::string)"jobField", std::string{ "Which one is your favourite toy?" },
		{ "Lego", "Play-Doh", "I have an old & ugly toy, but I love it so much" }));




	while (!manager.isResultFound())
	{
		manager.askQuestion();
		manager.fetchUserAnswer();
		//manager.getElementById(0).getAnswer();
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