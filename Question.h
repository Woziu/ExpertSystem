#pragma once

#include <string>
#include <vector>
class Question
{
public:
	Question();
	Question(std::string &t_topic, std::string &t_content, std::vector<std::string> t_availableAnswers);
	~Question();

	std::string getTopic() const;
	std::string getContent() const;
	std::string getAnswer() const;

	bool isAvailableAnswers() const;
	bool isAnswered() const;

private:
	std::string m_topic;
	std::string m_content;
	std::string m_answer;

	std::vector <std::string> m_availableAnswers;

	bool m_answered{ false };

};

