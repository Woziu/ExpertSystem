#pragma once
#include <string>
#include <iostream>
#include <vector>

class Question
{
	friend class QuestionManager;
public:
	Question();
	Question(std::string &t_topic, std::string &t_content, std::vector<std::string> t_availableAnswers);
	~Question();

	std::string getTopic() const;
	std::string getContent() const;
	std::string getAnswer() const;
	std::string getAvailableAnswerById(int t_id) const;

	void setAnswer(std::string t_answer);
	bool isAnswered() const;//ever used?


private:
	std::string m_topic;
	std::string m_content;
	std::string m_answer;

	std::vector <std::string> m_availableAnswers;

	bool m_answered{ false };

};

