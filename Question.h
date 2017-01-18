#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Answer.h"

class Question
{
	friend class QuestionManager;
public:
	Question(std::string &t_topic, std::string &t_content);
	~Question();

	std::string getTopic() const;//returns topic
	std::string getContent() const;//returns question text
	std::string getAnswer() const;//returns selected answer
	
	void addAnswer(Answer &&t_answer);//adds answer to m_availableAnswers
	void setAnswer(std::string t_answer);//sets m_answer
	void setTopic(std::string t_topic);//sets m_topic
	void setContent(std::string t_content);//sets m_content
	std::vector <Answer> m_availableAnswers;//stores available answers
private:
	void printSelectedAnswer();//prints selected answer
	std::string m_topic;//stores topic used to identify question by system
	std::string m_content;//stores the actual question
	std::string m_answer;//stores answer if answered
	
};

