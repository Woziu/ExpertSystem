#include "Question.h"
#include <iostream>

Question::Question(std::string &t_topic, std::string &t_content, std::vector<std::string> t_availableAnswers)
:m_topic(t_topic), m_content(t_content)
{
	m_availableAnswers = t_availableAnswers;
	std::cout << "Topic: " << m_topic << std::endl;
	std::cout << "Question: " << m_content << std::endl;
	int i = 1;
	for (auto it = m_availableAnswers.begin(); it != m_availableAnswers.end(); it++)
	{
		std::cout << i << ") " << *it << std::endl;
		i++;
	}
}

std::string Question::getContent() const
{
	std::cout << m_content << std::endl;
	return m_content;
}

Question::~Question()
{
}
