#pragma once
#include "Question.h"
class QuestionManager
{
public:
	Question getElementById(int t_id);//ever used?

	void addElement(Question &t_question);
	void printQuestion();
	void printAnswers();
	void fetchUserAnswer();
	void askQuestion();
	
	void checkResult();//put all rulles here
	bool isResultFound()  const;
	void printResult();
	std::string getCurrentQuestionTopic() const;
	//todo
	void selectNextQuestionByTopic(std::string t_topic);//put here code to skip questions
	void skipToQuestion(std::string t_topic);


	QuestionManager();
	~QuestionManager();
private:
	void setAnswer(int t_answerId);
	int m_currentQuestion;
	bool m_resultFound;
	std::string m_resultText;
	std::vector<Question> m_questionVector;

};

