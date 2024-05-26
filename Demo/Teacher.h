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
        bool equalByDate(const Teacher& other);
        bool equalByName(const Teacher& other);
        bool equalByPost(const Teacher& other);
        bool equalByDegree(const Teacher& other);
        bool equalByRank(const Teacher& other);
        std::string& toString();
        friend std::ifstream& operator>>(std::ifstream& is, Teacher person);
        friend std::ofstream& operator<<(std::ofstream& is, Teacher person);
        Post GetPost();
    };
}
