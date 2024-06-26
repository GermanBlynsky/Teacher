#include "Rank.h"

uizi::Rank::Rank(Rank_ rank) {
	this->rank = rank;
}

void uizi::Rank::setRank(Rank_ rank) {
	this->rank = rank;
}

std::string uizi::Rank::toString() {
	if (rank == NoRank) {
		return "No rank";
	}
	if (rank == CandidatRank) {
		return "Candidat";
	}
	if (rank == DoctorRank) {
		return "Doctor";
	}
	throw;
}