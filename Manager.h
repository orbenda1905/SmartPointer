/*
 * Manager.h
 *
 *  Created on: May 23, 2015
 *      Author: Benda
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "Headers.h"
#include "Artist.h"
#include "Programmer.h"

using namespace std;

class Manager : public virtual Programmer, public virtual Artist {
private:
	int projCount;
	int totalProjects;
public:
	Manager(const string id, const string& Name, const string phNum, string compId, string& currProj, int TProjH, int THrs, int exp, bool employ, int hrsPDay, vector<string>& knwdP, vector<string>& fieldP, vector<string>& fieldA);
	virtual ~Manager();
    void Printmanger();

};


#endif /* MANAGER_H_ */
