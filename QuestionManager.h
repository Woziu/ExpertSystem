#pragma once
#include "Question.h"
class QuestionManager
{
public:
	Question getElementById(int t_id);
	void addElement(Question &t_question);
	void setQuestionAnswer();
	//todo
	void skipQuestion();
	void checkResult();

	QuestionManager();
	~QuestionManager();
private:
	std::vector<Question> m_questionVector;

};

