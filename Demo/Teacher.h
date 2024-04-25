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
        Teacher(FullName name, Date birth, Post post, Degree degree, Rank rank); // Наследник! Инициализировать базовый class!
        bool equalByDate(Teacher other);
        bool equalByName(Teacher other);
        bool equalByPost(Teacher other);
        bool equalByDagree(Teacher other);
        bool equalByRank(Teacher other);
        std::string& toString();
        friend std::ifstream& operator>>(std::ifstream& is, Teacher person);
        friend std::ofstream& operator<<(std::ofstream& is, Teacher person);
    };
}
