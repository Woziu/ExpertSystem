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
		{ "3D/Gaming", "Mobile", "Enterprise", "Web", "I want to work for big tech companies",
			"Doesn`t matter, I just want to make money" }));
	manager.addElement(Question((std::string)"dijkstra", std::string{ "Have you heard about Dijkstra?" },
		{ "Yes", "No" }));
	manager.addElement(Question((std::string)"techComp", std::string{ "Which one?" },
		{ "Facebook", "Google", "Apple", "Microsoft" }));
	manager.addElement(Question((std::string)"whichEnd", std::string{ "Which part you want to learn?" },
		{ "Front-end (web interface)", "Back-end (brain behind a website)" }));
	manager.addElement(Question((std::string)"backendFIeld", std::string{ "Where do you want to work?" },
		{ "Startup", "Corporate" }));

	//until result is found, ask questions and compute user input
	while (!manager.isResultFound())
	{
		manager.askQuestion();
		manager.fetchUserAnswer();
		manager.checkResult();
		if (manager.isResultFound())
		{
			break;
		}
	}
	//print result and exit
	manager.printResult();
	return 0;
}