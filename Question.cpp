#include "Question.h"

Question::Question(std::string &t_topic, std::string &t_content, std::vector<std::string> t_availableAnswers)
:m_topic(t_topic), m_content(t_content)
{
	m_availableAnswers = t_availableAnswers;
	/*
	std::cout << "Topic: " << m_topic << std::endl;
	std::cout << "Question: " << m_content << std::endl;
	int i = 1;
	for (auto it = m_availableAnswers.begin(); it != m_availableAnswers.end(); it++)
	{
		std::cout << i << ") " << *it << std::endl;
		i++;
	}
	*/
}

std::string Question::getContent() const
{
	return m_content;
}

std::string Question::getTopic() const
{
	return m_topic;
}

std::string Question::getAnswer() const
{
	std::cout << "User answer is: " << m_answer << std::endl;
	return m_answer;
}

void Question::setAnswer(std::string t_answer)
{
	m_answer = t_answer;
}

Question::~Question()
{
}
