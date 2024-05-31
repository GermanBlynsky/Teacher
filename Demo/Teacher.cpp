#include "Teacher.h"
#include "Person.h"
#include "Post.h"
#include "Degree.h"
#include "Rank.h"
#include <sstream>



namespace uizi {
	Teacher::Teacher(const FullName& name, const Date& birth, const Post& post, const Degree& degree, const Rank& rank, const Gender& gender)
		:Person(gender, name, birth)
	{
		this->post = post;
		this->degree = degree;
		this->rank = rank;
	}
	bool Teacher::equalByDate(const Teacher& other) const
	{
		return this->GetDate() == other.GetDate();
	}
	bool Teacher::equalByName(const Teacher& other) const
	{
		return this->GetName() == other.GetName();
	}
	bool Teacher::equalByPost(const Teacher& other) const
	{
		return this->GetPost() == other.GetPost();
	}
	bool Teacher::equalByDegree(const Teacher& other) const
	{
		return this->GetDegree() == other.GetDegree();
	}

	bool Teacher::equalByRank(const Teacher& other) const
	{
		return this->GetRank() == other.GetRank();
	}

	Post Teacher::GetPost() const {
		return post;
	}
	Degree Teacher::GetDegree() const {
		return degree;
	}
	Rank Teacher::GetRank() const {
		return rank;
	}
}
std::string uizi::Teacher::toString()
{
	std::stringstream a{};
	a << Person::toString();
	a << post << " " << degree << " " << rank;
	return a.str();
}

