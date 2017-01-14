#include "QuestionManager.h"

QuestionManager::QuestionManager()
{
	m_currentQuestion = 0;
	m_resultFound = false;
}

void QuestionManager::addElement(Question &t_question)
{
	m_questionVector.push_back(t_question);
	printf("Question added to manager\n");
}

Question QuestionManager::getElementById(int t_id)
{
	return m_questionVector[t_id];
}

void QuestionManager::printQuestion()
{
	std::cout << m_questionVector[m_currentQuestion].getContent() << std::endl;
}

void QuestionManager::printAnswers()
{
	int i = 1;
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
	while (userAnswer < 1 || userAnswer > answersAmonut)
	{
		std::cout << "Wrong answer! You can select only numbers 1-" << answersAmonut << std::endl;
		printAnswers();
		std::cin >> userAnswer;
	}
	setAnswer(userAnswer);
}

void QuestionManager::setAnswer(int t_answerId)
{
	std::string userAnswer = m_questionVector[m_currentQuestion].m_availableAnswers[t_answerId - 1];
	m_questionVector[m_currentQuestion].setAnswer(userAnswer);
}

void QuestionManager::checkResult()
{
	std::string lastAnserw = m_questionVector[m_currentQuestion].getAnswer();
	if (getCurrentQuestionTopic() == "puropse")
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
			m_currentQuestion = 2;
		}
	}
	else if (getCurrentQuestionTopic() == "anyIdea")
	{
		if (lastAnserw == "No. Just want to get started")
		{
			m_resultFound = true;
			m_resultText = "Start with Scratch, then move to Python";
		}
		else if (lastAnserw == "Yes")
		{
			m_currentQuestion = 1;
		}
	}

}

void QuestionManager::selectNextQuestionByTopic(std::string t_topic)
{
	int i = 0;
	for (auto it = m_questionVector.begin(); it != m_questionVector.end(); it++)
	{
		if (it->getTopic == t_topic)
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
}

