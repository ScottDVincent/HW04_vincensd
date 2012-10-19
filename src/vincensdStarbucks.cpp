/*****
 * File: vincensdStarbucks.cpp	
 * Author   : vincensd
 * Date     : 2012-10-10
 * Sources  : 
 * Purpose  :  Your starbucks data structure should be   
 a sub-class of this class, but you should not implement this class. 
 Instead, you should   create a <uniqueid>Starbucks class, in the files <uniqueid>Starbucks.h and 
 <uniqueid>Starbucks.cpp
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
		//http://stackoverflow.com/questions/5265160/using-getline-to-extract-information-and-store-them-in-a-datatype-in-c?rq=1
		ifstream fp ("Starbucks_2006.csv");		// pg589 create an an input stream
			if (fp.fail()){ 
				printf("Error opening file %s\n", "Starbucks_2006.csv"); 
			return 0; 

		// open file
			//http://stackoverflow.com/questions/12233596/reading-csv-data-from-a-file?rq=1
		   ifstream infile("c:/Starbucks_2006.csv");	// pg589 create an an input stream
		       string line = "";
		       vector<string> all_words;
		       while (getline(infile, line)){
			           stringstream strstr(line);
			           string word = "";
			           while (getline(strstr,word, ',')) all_words.push_back(word);
		      
		   }
			   }
	}
	
	/*
	 * Return a pointer to the entry that is closest to the given coordinates. Your
	 *  answer may be approximate, but then you will lose points on the "Accuracy" quality measure
	 */
	Entry* vincensdStarbucks::getNearest(double x, double y) {
		
		
		/** 
		for (unsigned i = 0; i < all_words.size(); i++)
		cout << all_words.at(i) << '\n';

		// set distance of first point
		distanceSmallest* = sqr ( (x+x[0])^2 + (y+y[0])^2 );

		// loop thru points
		for (i=1; i<= arrayEnd; i++) {
		distanceTwo = sqr ( (x+x[i])^2 + (y+y[i])^2 );
		
			if  distanceTwo < distanceSmallest*;
				 distanceSmallest* = distanceTwo;

		  }

		  return distanceSmallest*;

		*/
		
	}
