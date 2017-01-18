#include "QuestionManager.h"

QuestionManager::QuestionManager()
{
	m_currentQuestion = 0;
	m_resultFound = false;
}

void QuestionManager::addQuestion(Question &t_question)
{
	m_questionVector.push_back(t_question);
}

Question& QuestionManager::getQuestionByTopic(std::string t_topic)
{
	//iterate through questions and return question with t_topic
	for (int i = 0; i < m_questionVector.size(); i++)
	{
		if (m_questionVector[i].getTopic() == t_topic)
		{
			return m_questionVector[i];
		}
	}
}



void QuestionManager::printQuestion()
{
	std::cout << m_questionVector[m_currentQuestion].getContent() << std::endl;
}

void QuestionManager::printAnswers()
{
	
	//std::cout << "answers: " << m_questionVector[m_currentQuestion].m_availableAnswers[0].getContent() << std::endl;
	int i = 1;
	//loop through available answers and print them with corresponding numbers
	for (auto it = m_questionVector[m_currentQuestion].m_availableAnswers.begin(); 
		it != m_questionVector[m_currentQuestion].m_availableAnswers.end(); it++)
	{
		std::cout << i << ") " << it->getContent() << std::endl;
		i++;
	}
}

void QuestionManager::askQuestion()
{
	printQuestion();
	printAnswers();
}

void QuestionManager::validateUserAnswer()
{
	int userAnswer = 0;
	int answersAmonut = m_questionVector[m_currentQuestion].m_availableAnswers.size();
	std::cin >> userAnswer;
	//loop until user select available answer
	while (userAnswer < 1 || userAnswer > answersAmonut)
	{
		std::cout << "Wrong answer! You can select only numbers 1-" << answersAmonut << std::endl;
		printAnswers();
		std::cin.clear();
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
	std::string userAnswer = m_questionVector[m_currentQuestion].m_availableAnswers[t_answerId - 1].getContent();
	m_questionVector[m_currentQuestion].setAnswer(userAnswer);
}

void QuestionManager::checkResult()
{
	std::string lastAnserw = m_questionVector[m_currentQuestion].getAnswer();
	//iterate through available answers
	for (auto it = m_questionVector[m_currentQuestion].m_availableAnswers.begin();
		it != m_questionVector[m_currentQuestion].m_availableAnswers.end(); it++)
	{
		if (it->getContent() == lastAnserw)
		{
			//check if system can find result based on that answer
			if (it->isFinal() == true)
			{
				//
				m_resultFound = true;
				m_resultText = it->getResult();
				break;
			} 
			else
			{
				//if not select next question
				selectNextQuestionByTopic(it->getNextTopic());
				break;
			}
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

	std::cout << std::endl << "##############################" << std::endl;
	std::cout << m_resultText << std::endl << std::endl;
}

bool QuestionManager::isResultFound() const
{
	return m_resultFound;
}

QuestionManager::~QuestionManager()
{
}

