#pragma once
#include <string>
#include <iostream>
namespace uizi {
	enum Rank_{NoRank = 0, CandidatRank = 1, DoctorRank = 2};
	class Rank
	{
		Rank_ rank;
	public:
		Rank(Rank_ rank);
		std::string toString();
		void setRank(Rank_ rank);
		friend std::istream& operator>>(std::istream& is, Rank &rank) {
			std::string rankStr;
			is >> rankStr;
			if (rankStr == "No rank") {
				rank.setRank(NoRank);
				return is;
			}
			if (rankStr == "Candidat") {
				rank.setRank(CandidatRank);
				return is;
			}
			if (rankStr == "Doctor") {
				rank.setRank(DoctorRank);
				return is;
			}
		}
	};
}

