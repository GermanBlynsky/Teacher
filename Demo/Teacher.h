#pragma once
#include "Person.h"
#include "Post.h"
#include "Degree.h"
#include "Rank.h"
namespace uizi {
    class Teacher :
        public Person
    {
        Post post;
        Degree degree;
        Rank rank;
    public:
        Teacher(const FullName& name, const Date& birth, const Post& post, const Degree& degree, const Rank& rank, const Gender& gender);
        bool equalByDate(const Teacher& other) const;
        bool equalByName(const Teacher& other) const;
        bool equalByPost(const Teacher& other) const;
        bool equalByDegree(const Teacher& other) const;
        bool equalByRank(const Teacher& other) const;
        std::string toString();
        friend std::istream& operator>>(std::istream& is, Teacher& teacher) {
            FullName name;
            Date birth;
            Post post;
            Degree degree;
            Rank rank;
            int gender;
            if (is >> name >> birth >> post >> degree >> rank >> gender) {
                teacher = Teacher(name, birth, post, degree, rank, static_cast<Gender>(gender));
            }
        }
        friend std::ostream& operator<<(std::ostream& os, Teacher teacher) {
            os << teacher.toString();
            return os;
        }
        Post GetPost() const;
        Degree GetDegree() const;
        Rank GetRank() const;
    };
}
