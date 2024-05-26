#include "Teacher.h"
#include "Person.h"


namespace uizi {
	Teacher::Teacher(const FullName& name, const Date& birth, const Post& post, const Degree& degree, const Rank& rank, const Gender& gender)
	:Person(gender, name, birth)
	{
		this->post = post;
		this->degree = degree;
		this->rank = rank;
	}
	Post Teacher::GetPost() {
		return post;
	}
}
