#pragma once
#include <string>
#include <iostream>
#include <vector>

class Question
{
	friend class QuestionManager;
public:
	Question(std::string &t_topic, std::string &t_content, std::vector<std::string> t_availableAnswers);
	~Question();

	std::string getTopic() const;//returns topic
	std::string getContent() const;//returns question text
	std::string getAnswer() const;//returns selected answer
	
	void setAnswer(std::string t_answer);//sets answer
	void setTopic(std::string t_topic);//sets topic
	void setContent(std::string t_content);//sets topic

private:
	void printSelectedAnswer();//prints selected answer
	std::string m_topic;//stores topic
	std::string m_content;//stores the actual question
	std::string m_answer;//stores answer if answered
	std::vector <std::string> m_availableAnswers;//stores available answers
};

