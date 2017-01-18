#pragma once
#include <string>

class Answer
{
private:
	std::string m_content;//stores answer text
	bool m_final;//stores 
	std::string m_nextTopic;
	std::string m_result;
	

public:
	std::string getContent();//returns m_content
	std::string getNextTopic();//returns m_topic
	bool isFinal();//returns m_final
	std::string getResult();//returns m_result

	Answer(std::string t_content, std::string t_nextTopic);//constructor for standard answers
	Answer(std::string t_content, bool t_final, std::string t_result);//constructor for final answers
	~Answer();
};

