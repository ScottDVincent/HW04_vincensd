/*****
 * File: vincensdStarbucks.cpp	
 * Author   : vincensd
 * Date     : 2012-10-10
 * Sources  : 
 * Purpose  :  Your starbucks data structure should be   
 a sub-class of this class, but you should not implement this class. 
 Instead, you should   create a <uniqueid>Starbucks class, in the files <uniqueid>Starbucks.h and 
 <uniqueid>Starbucks.cpp

 Some helpful ideas
 http://www.daniweb.com/software-development/cpp/threads/50051/how-to-read-data-from-csv-file-in-an-array-and-parse
 http://stackoverflow.com/questions/5265160/using-getline-to-extract-information-and-store-them-in-a-datatype-in-c?rq=1
 /http://stackoverflow.com/questions/12233596/reading-csv-data-from-a-file?rq=1
 */
 
#include "vincensdStarbucks.h"

using namespace std;

	/** 
	*Default vincensdStarbucks constructor
	*/  
	vincensdStarbucks::vincensdStarbucks(){
	}

		/** 
	*vincensdStarbucks constructor
	*/  
	vincensdStarbucks::vincensdStarbucks( /** what do I want */){
	}


	/*
	 * add all entries in the array to your data structure
	 *
	 * The "c" parameter is a pointer to an array of all the entries to be added, 
	 and n is the length of the array.
	 *
	 * Note: If you detect that two items have the same coordinates, 
	 then do not add the new item that has the same coordinates as another item. 
	 This is guaranteed to happen, by the way, because some Starbucks locations are listed in the database twice. We will define two locations to be the "same location" if both |x1 - x2| <= 0.00001 and |y1 - y2| < 0.00001
	 */
	void vincensdStarbucks::build(Entry* c, int n){
		
		Entry* newEntry = c;
				

		//do error checking
		//
		ifstream fp ("..Resources/Starbucks_2006.csv");		// pg589 create an an input stream
			if (fp.fail()){ 
				printf("Error opening file %s\n", "Starbucks_2006.csv"); 
			return 0; 

		// open file
		   ifstream infile("..Resources/Starbucks_2006.csv");	// pg589 create an an input stream
		       string line = "";
		       vector<string> the_list;		    	// instantiate vector
		       while (getline(infile, line)){			// basically while file has a line of data
			           stringstream strstr(line);		// create a strstr of stringstream type for manipulation
			           string word = "";				// 
			           while (getline(strstr,word, ','))// While  we have a line, with no spaces, delimiter is ','
						   the_list.push_back(word);	// split the string and add pieces onto back of vector
		   		   }
		  }
	}
	
	/*
	 * Return a pointer to the entry that is closest to the given coordinates. Your
	 *  answer may be approximate, but then you will lose points on the "Accuracy" quality measure
	 */
	Entry* vincensdStarbucks::getNearest(double x, double y) {
		/** 	*/
		for (int i = 0; i < the_list.size(); i++)	// iterate thru vector
		cout << the_list.at(i) << '\n';				// write vector contents

		// set distance of first point
		double distanceSmallest* = 1.1;

		// loop thru points
		for (int i = 1; i <= the_list.back; i++) {
		
		//Have to convert string into double
			// double nX = the_list.at(i+1)
			// double nY = the_list.at(i+2)

		double distanceTwo* = sqrt( ((x - nX)^2) + ((y - nY)^2) );
			if  (distanceTwo* < distanceSmallest*)
					distanceSmallest* = distanceTwo*;
			// ? how to equate the Entry w/ the smallest (x,y) coords

		  }

		// return the Entry with the nearest location
		// distanceSmallest isn't the correct thing to return
		return distanceSmallest* ;

	
		
	}
