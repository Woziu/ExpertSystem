#include "Question.h"

Question::Question(std::string &t_topic, std::string &t_content)
:m_topic(t_topic), m_content(t_content)
{

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
	return m_answer;
}

void Question::setAnswer(std::string t_answer)
{
	m_answer = t_answer;
}

void Question::setTopic(std::string t_topic)
{
	m_topic = t_topic;
}

void Question::setContent(std::string t_content)
{
	m_content = t_content;
}

void Question::printSelectedAnswer()
{
	std::cout << std::endl << "User answer is: " << m_answer << std::endl;
}

void Question::addAnswer(Answer &&t_answer)
{
	m_availableAnswers.push_back(t_answer);
} 

Question::~Question()
{
}
