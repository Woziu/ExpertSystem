#include "QuestionManager.h"

QuestionManager::QuestionManager()
{
	m_currentQuestion = 0;
	m_resultFound = false;
}

void QuestionManager::addElement(Question &t_question)
{
	m_questionVector.push_back(t_question);
}

void QuestionManager::printQuestion()
{
	std::cout << m_questionVector[m_currentQuestion].getContent() << std::endl;
}

void QuestionManager::printAnswers()
{
	int i = 1;
	//loop through available answers and print them with corresponding numbers
	for (auto it = m_questionVector[m_currentQuestion].m_availableAnswers.begin(); 
		it != m_questionVector[m_currentQuestion].m_availableAnswers.end(); it++)
	{
		std::cout << i << ") " << *it << std::endl;
		i++;
	}
}

void QuestionManager::askQuestion()
{
	printQuestion();
	printAnswers();
}

void QuestionManager::fetchUserAnswer()
{
	int userAnswer = 0;
	int answersAmonut = m_questionVector[m_currentQuestion].m_availableAnswers.size();
	std::cin >> userAnswer;
	//loop until user select available answer
	while (userAnswer < 1 || userAnswer > answersAmonut)
	{
		std::cout << "Wrong answer! You can select only numbers 1-" << answersAmonut << std::endl;
		printAnswers();
		std::cin >> userAnswer;
	}
	//set current question answer
	setAnswer(userAnswer);
	//print answer selected by user
	m_questionVector[m_currentQuestion].printSelectedAnswer();
}

void QuestionManager::setAnswer(int t_answerId)
{
	//decrease id by 1 since 0 is first available answer id
	std::string userAnswer = m_questionVector[m_currentQuestion].m_availableAnswers[t_answerId - 1];
	m_questionVector[m_currentQuestion].setAnswer(userAnswer);
}

void QuestionManager::checkResult()
{
	std::string lastAnserw = m_questionVector[m_currentQuestion].getAnswer();
	//with given answer check if result is found or system should ask next question
	if (getCurrentQuestionTopic() == "purpose")
	{
		if (lastAnserw == "For my kids")
		{
			m_resultFound = true;
			m_resultText = "Start with Scratch, then move to Python";
		}
		else if (lastAnserw == "For education")
		{
			selectNextQuestionByTopic(std::string("anyIdea"));
		}
		else if (lastAnserw == "To make money")
		{
			selectNextQuestionByTopic(std::string("moneyWay"));
		}
	}
	else if (getCurrentQuestionTopic() == "anyIdea")
	{
		if (lastAnserw == "No. Just want to get started")
		{
			selectNextQuestionByTopic(std::string("learningWay"));
		}
		else if (lastAnserw == "Yes")
		{
			selectNextQuestionByTopic(std::string("startupField"));
		}
	}
	else if (getCurrentQuestionTopic() == "moneyWay")
	{
		if (lastAnserw == "I want to get a job")
		{
			selectNextQuestionByTopic(std::string("jobField"));
		}
		else if (lastAnserw == "I have a startup idea")
		{
			selectNextQuestionByTopic(std::string("startupField"));
		}
	}
	else if (getCurrentQuestionTopic() == "learningWay")
	{
		if (lastAnserw == "Easy way")
		{
			m_resultFound = true;
			m_resultText = "You should choose Python";
		}
		else if (lastAnserw == "The really hard way (but easier to pick up other languages in the future)")
		{
			m_resultFound = true;
			m_resultText = "You should choose C++";
		}
		else if (lastAnserw == "The slightly harder way")
		{
			selectNextQuestionByTopic(std::string("carMode"));
		}
	}
	else if (getCurrentQuestionTopic() == "carMode")
	{
		if (lastAnserw == "Auto")
		{
			m_resultFound = true;
			m_resultText = "You should choose Java";
		}
		else if (lastAnserw == "Manual")
		{
			m_resultFound = true;
			m_resultText = "You should choose C";
		}
	}
	else if (getCurrentQuestionTopic() == "startupField")
	{
		if (lastAnserw == "3D/Gaming")
		{
			m_resultFound = true;
			m_resultText = "You should choose C++";
		}
		else if (lastAnserw == "Mobile")
		{
			selectNextQuestionByTopic(std::string("mobileOS"));
		}
		else if (lastAnserw == "Enterprise")
		{
			selectNextQuestionByTopic(std::string("aboutMS"));
		}
		else if (lastAnserw == "Web")
		{
			selectNextQuestionByTopic(std::string("realTime"));
		}
	}
	else if (getCurrentQuestionTopic() == "realTime")
	{
		if (lastAnserw == "Yes")
		{
			m_resultFound = true;
			m_resultText = "You should choose JavaScript";
		}
		else if (lastAnserw == "No")
		{
			selectNextQuestionByTopic(std::string("somethingNew"));
		}
	}
	else if (getCurrentQuestionTopic() == "mobileOS")
	{
		if (lastAnserw == "iOS")
		{
			m_resultFound = true;
			m_resultText = "You should choose Objective-C";
		}
		else if (lastAnserw == "Android")
		{
			m_resultFound = true;
			m_resultText = "You should choose Java";
		}
	}
	else if (getCurrentQuestionTopic() == "aboutMS")
	{
		if (lastAnserw == "I dont like it")
		{
			m_resultFound = true;
			m_resultText = "You should choose Java";
		}
		else if (lastAnserw == "I`m a fan")
		{
			m_resultFound = true;
			m_resultText = "You should choose C#";
		}
	}
	else if (getCurrentQuestionTopic() == "somethingNew")
	{
		if (lastAnserw == "Yes")
		{
			m_resultFound = true;
			m_resultText = "You should choose JavaScript";
		}
		else if (lastAnserw == "No")
		{
			selectNextQuestionByTopic(std::string("toy"));
		}
		else if (lastAnserw == "Not sure")
		{
			selectNextQuestionByTopic(std::string("toy"));
		}
	}
	else if (getCurrentQuestionTopic() == "toy")
	{
		if (lastAnserw == "Lego")
		{
			m_resultFound = true;
			m_resultText = "You should choose Python";
		}
		else if (lastAnserw == "Play-Doh")
		{
			m_resultFound = true;
			m_resultText = "You should choose Ruby";
		}
		else if (lastAnserw == "I have an old & ugly toy, but I love it so much")
		{
			m_resultFound = true;
			m_resultText = "You should choose PHP";
		}
	}
	else if (getCurrentQuestionTopic() == "jobField")
	{
		if (lastAnserw == "3D/Gaming")
		{
			m_resultFound = true;
			m_resultText = "You should choose C++";
		}
		else if (lastAnserw == "Mobile")
		{
			selectNextQuestionByTopic(std::string("mobileOS"));
		}
		else if (lastAnserw == "Enterprise")
		{
			selectNextQuestionByTopic(std::string("aboutMS"));
		}
		else if (lastAnserw == "Web")
		{
			selectNextQuestionByTopic(std::string("whichEnd"));
		}
		else if (lastAnserw == "Doesn`t matter, I just want to make money")
		{
			selectNextQuestionByTopic(std::string("dijkstra"));
		}
		else if (lastAnserw == "I want to work for big tech companies")
		{
			selectNextQuestionByTopic(std::string("techComp"));
		}
	}
	else if (getCurrentQuestionTopic() == "dijkstra")
	{
		if (lastAnserw == "Yes")
		{
			m_resultFound = true;
			m_resultText = "You should choose Java";
		}
		else if (lastAnserw == "No")
		{
			m_resultFound = true;
			m_resultText = "You should choose Cobol";
		}
	}
	else if (getCurrentQuestionTopic() == "techComp")
	{
		if (lastAnserw == "Facebook" || lastAnserw == "Google")
		{
			m_resultFound = true;
			m_resultText = "You should choose Python";
		}
		else if (lastAnserw == "Apple")
		{
			m_resultFound = true;
			m_resultText = "You should choose Objective-C";
		}
		else if (lastAnserw == "Microsoft")
		{
			m_resultFound = true;
			m_resultText = "You should choose C#";
		}
	}
	else if (getCurrentQuestionTopic() == "whichEnd")
	{
		if (lastAnserw == "Back-end (brain behind a website)")
		{
			selectNextQuestionByTopic(std::string("backendFIeld"));
		}
		else if (lastAnserw == "Front-end (web interface)")
		{
			m_resultFound = true;
			m_resultText = "You should choose JavaScript";
		}
	}
	else if (getCurrentQuestionTopic() == "backendFIeld")
	{
		if (lastAnserw == "Startup")
		{
			selectNextQuestionByTopic(std::string("somethingNew"));
		}
		else if (lastAnserw == "Corporate")
		{
			selectNextQuestionByTopic(std::string("aboutMS"));
		}
	}
}

void QuestionManager::selectNextQuestionByTopic(std::string t_topic)
{
	int i = 0;
	//iterate through questions and set question as current question by its topic 
	for (auto it = m_questionVector.begin(); it != m_questionVector.end(); it++)
	{
		if (it->getTopic() == t_topic)
		{
			m_currentQuestion = i;
			break;
		}
		i++;
	}
}

std::string QuestionManager::getCurrentQuestionTopic() const
{
	return m_questionVector[m_currentQuestion].getTopic();
}

void QuestionManager::printResult()
{
	std::cout << "##############################" << std::endl;
	std::cout << m_resultText << std::endl;
}

bool QuestionManager::isResultFound() const
{
	return m_resultFound;
}

QuestionManager::~QuestionManager()
{
	m_questionVector.clear();
}

