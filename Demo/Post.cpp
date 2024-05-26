#include "Post.h"

std::string uizi::Post::toString() {
	if (post == GreatPost) {
		return "Great";
	}
	if (post == DocentPost) {
		return "Docent";
	}
	if (post == ProfessorPost) {
		return "Professor";
	}
	throw;
}

void uizi::Post::setPost(enum Post_ post) {
	this->post = post;
}

uizi::Post::Post(enum Post_ post) {
	this->post = post;
}
uizi::Post::Post() {
	this->post = GreatPost;
}