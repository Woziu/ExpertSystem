#include "QuestionManager.h"


QuestionManager::QuestionManager()
{
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

void QuestionManager::setQuestionAnswer()
{

}

QuestionManager::~QuestionManager()
{
}

