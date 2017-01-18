#include <cstdio>
#include <string>
#include "QuestionManager.h"

void addQuestionsToManager(QuestionManager &t_manager)
{
	t_manager.addQuestion(Question((std::string)"purpose", std::string{ "Why do you want to learn?" }));
	t_manager.getQuestionByTopic("purpose").addAnswer(
		Answer(std::string{ "For education" }, std::string{ "anyIdea" }));
	t_manager.getQuestionByTopic("purpose").addAnswer(
		Answer(std::string{ "To make money" }, std::string{ "moneyWay" }));
	t_manager.getQuestionByTopic("purpose").addAnswer(
		Answer(std::string{ "For my kids" }, true, std::string{ "Start with Scratch, then move to Python" }));


	t_manager.addQuestion(Question((std::string)"anyIdea", std::string{ "Do you have a brilliant idea/platform in mind?" }));
	t_manager.getQuestionByTopic("anyIdea").addAnswer(
		Answer(std::string{ "No. Just want to get started" }, std::string{ "learningWay" }));
	t_manager.getQuestionByTopic("anyIdea").addAnswer(
		Answer(std::string{ "Yes" }, std::string{ "startupField" }));


	t_manager.addQuestion(Question((std::string)"learningWay", std::string{ "What way do you prefer to learn thins?" }));
	t_manager.getQuestionByTopic("learningWay").addAnswer(
		Answer(std::string{ "Easy way" }, true, std::string{ "You should choose Python" }));
	t_manager.getQuestionByTopic("learningWay").addAnswer(
		Answer(std::string{ "The slightly harder way" }, std::string{ "carMode" }));
	t_manager.getQuestionByTopic("learningWay").addAnswer(
		Answer(std::string{ "The really hard way (but easier to pick up other languages in the future)" }, true, std::string{ "You should choose C++" }));


	t_manager.addQuestion(Question((std::string)"carMode", std::string{ "Do you prefer auto or manual car?" }));
	t_manager.getQuestionByTopic("carMode").addAnswer(
		Answer(std::string{ "Auto" }, true, std::string{ "You should choose Java" }));
	t_manager.getQuestionByTopic("carMode").addAnswer(
		Answer(std::string{ "Manual" }, true, std::string{ "You should choose C" }));


	t_manager.addQuestion(Question((std::string)"moneyWay", std::string{ "How do you want to make money?" }));
	t_manager.getQuestionByTopic("moneyWay").addAnswer(
		Answer(std::string{ "I want to get a job" }, std::string{ "jobField" }));
	t_manager.getQuestionByTopic("moneyWay").addAnswer(
		Answer(std::string{ "I have a startup idea" }, std::string{ "startupField" }));


	t_manager.addQuestion(Question((std::string)"startupField", std::string{ "Which platform/field?" }));
	t_manager.getQuestionByTopic("startupField").addAnswer(
		Answer(std::string{ "3D/Gaming" }, true, std::string{ "You should choose C++" }));
	t_manager.getQuestionByTopic("startupField").addAnswer(
		Answer(std::string{ "Mobile" }, std::string{ "mobileOS" }));
	t_manager.getQuestionByTopic("startupField").addAnswer(
		Answer(std::string{ "Enterprise" }, std::string{ "aboutMS" }));
	t_manager.getQuestionByTopic("startupField").addAnswer(
		Answer(std::string{ "Web" }, std::string{ "realTime" }));


	t_manager.addQuestion(Question((std::string)"realTime", std::string{ "Does your web app provides info in real-time, like Twitter?" }));
	t_manager.getQuestionByTopic("realTime").addAnswer(
		Answer(std::string{ "Yes" }, true, std::string{ "You should choose JavaScript" }));
	t_manager.getQuestionByTopic("realTime").addAnswer(
		Answer(std::string{ "No" }, std::string{ "somethingNew" }));


	t_manager.addQuestion(Question((std::string)"mobileOS", std::string{ "Which OS?" }));
	t_manager.getQuestionByTopic("mobileOS").addAnswer(
		Answer(std::string{ "iOS" }, true, std::string{ "You should choose Objective-C" }));
	t_manager.getQuestionByTopic("mobileOS").addAnswer(
		Answer(std::string{ "Android" }, true, std::string{ "You should choose Java" }));


	t_manager.addQuestion(Question((std::string)"aboutMS", std::string{ "What do you think about Microsoft?" }));
	t_manager.getQuestionByTopic("aboutMS").addAnswer(
		Answer(std::string{ "I dont like it" }, true, std::string{ "You should choose Java" }));
	t_manager.getQuestionByTopic("aboutMS").addAnswer(
		Answer(std::string{ "I`m a fan" }, true, std::string{ "You should choose C#" }));


	t_manager.addQuestion(Question((std::string)"somethingNew", std::string{ "Do you want to try something new with huge potential, but less mature?" }));
	t_manager.getQuestionByTopic("somethingNew").addAnswer(
		Answer(std::string{ "Yes" }, true, std::string{ "You should choose JavaScript" }));
	t_manager.getQuestionByTopic("somethingNew").addAnswer(
		Answer(std::string{ "No" }, std::string{ "toy" }));
	t_manager.getQuestionByTopic("somethingNew").addAnswer(
		Answer(std::string{ "Not sure" }, std::string{ "toy" }));


	t_manager.addQuestion(Question((std::string)"toy", std::string{ "Which one is your favourite toy?" }));
	t_manager.getQuestionByTopic("toy").addAnswer(
		Answer(std::string{ "Lego" }, true, std::string{ "You should choose Python" }));
	t_manager.getQuestionByTopic("toy").addAnswer(
		Answer(std::string{ "Play-Doh" }, true, std::string{ "You should choose Ruby" }));
	t_manager.getQuestionByTopic("toy").addAnswer(
		Answer(std::string{ "I have an old & ugly toy, but I love it so much" }, true, std::string{ "You should choose PHP" }));


	t_manager.addQuestion(Question((std::string)"jobField", std::string{ "Which platform/field?" }));
	t_manager.getQuestionByTopic("jobField").addAnswer(
		Answer(std::string{ "3D/Gaming" }, true, std::string{ "You should choose C++" }));
	t_manager.getQuestionByTopic("jobField").addAnswer(
		Answer(std::string{ "Mobile" }, std::string{ "mobileOS" }));
	t_manager.getQuestionByTopic("jobField").addAnswer(
		Answer(std::string{ "Enterprise" }, std::string{ "aboutMS" }));
	t_manager.getQuestionByTopic("jobField").addAnswer(
		Answer(std::string{ "Web" }, std::string{ "whichEnd" }));
	t_manager.getQuestionByTopic("jobField").addAnswer(
		Answer(std::string{ "I want to work for big tech companies" }, std::string{ "techComp" }));
	t_manager.getQuestionByTopic("jobField").addAnswer(
		Answer(std::string{ "Doesn`t matter, I just want to make money" }, std::string{ "dijkstra" }));


	t_manager.addQuestion(Question((std::string)"dijkstra", std::string{ "Have you heard about Dijkstra?" }));
	t_manager.getQuestionByTopic("dijkstra").addAnswer(
		Answer(std::string{ "Yes" }, true, std::string{ "You should choose Java" }));
	t_manager.getQuestionByTopic("dijkstra").addAnswer(
		Answer(std::string{ "No" }, true, std::string{ "You should choose Cobol" }));


	t_manager.addQuestion(Question((std::string)"techComp", std::string{ "Which one?" }));
	t_manager.getQuestionByTopic("techComp").addAnswer(
		Answer(std::string{ "Facebook" }, true, std::string{ "You should choose Python" }));
	t_manager.getQuestionByTopic("techComp").addAnswer(
		Answer(std::string{ "Google" }, true, std::string{ "You should choose Python" }));
	t_manager.getQuestionByTopic("techComp").addAnswer(
		Answer(std::string{ "Apple" }, true, std::string{ "You should choose Objective-C" }));
	t_manager.getQuestionByTopic("techComp").addAnswer(
		Answer(std::string{ "Microsoft" }, true, std::string{ "You should choose C#" }));

	t_manager.addQuestion(Question((std::string)"whichEnd", std::string{ "Which part you want to learn?" }));
	t_manager.getQuestionByTopic("whichEnd").addAnswer(
		Answer(std::string{ "Back-end (brain behind a website)" }, std::string{ "backendField" }));
	t_manager.getQuestionByTopic("whichEnd").addAnswer(
		Answer(std::string{ "Front-end (web interface)" }, true, std::string{ "You should choose JavaScript" }));

	t_manager.addQuestion(Question((std::string)"backendField", std::string{ "Where do you want to work?" }));
	t_manager.getQuestionByTopic("backendField").addAnswer(
		Answer(std::string{ "Startup" }, std::string{ "somethingNew" }));
	t_manager.getQuestionByTopic("backendField").addAnswer(
		Answer(std::string{ "Corporate" }, std::string{ "aboutMS" }));

}

int main()
{
	QuestionManager manager;
	addQuestionsToManager(manager);

	//until result is found, ask questions and compute user input
	while (!manager.isResultFound())
	{
		manager.askQuestion();
		manager.validateUserAnswer();
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