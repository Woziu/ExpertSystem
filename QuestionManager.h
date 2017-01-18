#pragma once
#include "Question.h"
#include "Answer.h"
class QuestionManager
{
public:
	void addQuestion(Question &t_question);//adds question to m_questionVector
	Question &getQuestionByTopic(std::string t_topic);;//returns reference to Question by its topic
	void validateUserAnswer();//checks if user input is valid
	void askQuestion();//prints both question and answers
	void checkResult();//check if resault is found or select next question
	void printResult();//prints language as result from m_resultText
	bool isResultFound()  const;//returns if system found result

	QuestionManager();
	~QuestionManager();
private:
	void selectNextQuestionByTopic(std::string t_topic);//sets next question by its topic
	std::string getCurrentQuestionTopic() const;//returns topic of current question
	void printQuestion();//prints current question
	void printAnswers();//prints available answers for current question
	void setAnswer(int t_answerId);//sets question asnwer as std::string by answer`s id

	int m_currentQuestion;//stores current question id
	bool m_resultFound;//stores boolean value if result was found by system
	std::string m_resultText;//stores information about language selected by system
	std::vector<Question> m_questionVector;//stores question objects

};

