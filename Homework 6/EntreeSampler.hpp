/************************
**Author: Jasmine Kim
**Date: 7/24/17
**Description: This is the class specification file for EntreeSampler.
*************************/

#ifndef ENTREESAMPLER_HPP
#define ENTREESAMPLER_HPP

#include "Entree.hpp"

class EntreeSampler
{
    private:
	Entree ent1;	
	Entree ent2;
	Entree ent3;
	Entree ent4;

    public:
	EntreeSampler(Entree, Entree, Entree, Entree);
	void listEntrees();
	int totalCalories();

};

#endif	
