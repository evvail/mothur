#ifndef SHAREDBDIVERSITY_H
#define SHAREDBDIVERSITY_H
/*
 *  bdiversity.h
 *  Mothur
 *
 *  Created by Thomas Ryabin on 3/13/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
#include "calculator.h"

/*This class implements the BDiversity estimator on 2 groups. 
It is a child of the calculator class.*/ 

/***********************************************************************/

class SharedBDiversity : public Calculator  {
	
public:
	SharedBDiversity() : Calculator("sharedbdiversity", 3) {};
	EstOutput getValues(SAbundVector*) {return data;};
	EstOutput getValues(SharedRAbundVector*, SharedRAbundVector*);
private:
	double whitt(SharedRAbundVector*, SharedRAbundVector*);
	double ms(SharedRAbundVector*, SharedRAbundVector*);
	double sor(SharedRAbundVector*, SharedRAbundVector*);
	double mor(SharedRAbundVector*, SharedRAbundVector*);
};

/***********************************************************************/

#endif