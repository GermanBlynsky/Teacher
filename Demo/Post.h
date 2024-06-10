#pragma once
#include <iostream>
namespace uizi {
	enum Post_{GreatPost = 0, DocentPost = 1, ProfessorPost = 2};
	class Post
	{
		Post_ post;
	public:
		Post(enum Post_ post);
		std::string toString();
		void setPost(enum Post_ post);
		friend std::istream& operator>>(std::istream& is, Post &post){
			std::string postStr;
			is >> postStr;
			if (postStr == "Great") {
				post.setPost(GreatPost);  
				return is;
			}
			if (postStr == "Docent") {
				post.setPost(DocentPost);
				return is;
			}
			if (postStr == "Professor") {
				post.setPost(ProfessorPost);
				return is;
			}
			throw std::invalid_argument("wrong value post!");
		}
		friend std::ostream& operator<<(std::ostream& os, Post &post){
			os << post.toString();
			return os;
		}
		friend bool operator==(const Post& p1, const Post& p2) {
			return p1.post == p2.post;
		}
		Post();
	};
}


