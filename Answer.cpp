#include "Answer.h"

std::string Answer::getContent()
{
	return m_content;
}
std::string Answer::getNextTopic()
{
	return m_nextTopic;
}

bool Answer::isFinal()
{
	return m_final;
}

std::string Answer::getResult()
{
	return m_result;
}


Answer::Answer(std::string t_content, std::string t_nextTopic)
: m_content(t_content), m_nextTopic(t_nextTopic)
{
	m_final = false;
	m_result = "";
}

Answer::Answer(std::string t_content, bool t_final, std::string t_result)
: m_content(t_content), m_final(t_final), m_result(t_result)
{
	m_nextTopic = "";
}

Answer::~Answer()
{
}
