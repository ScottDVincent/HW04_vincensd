/*****
 * File: Hw04_vincensdApp.cpp	
 * Author   : vincensd
 * Date     : 2012-10-10
 * Sources  : 
 * Purpose  :  
 */


//cinder includes
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/app/App.h"
#include "cinder/gl/Texture.h"
#include "boost/date_time/posix_time/posix_time.hpp"
#include "cinder/Text.h"
#include "cinder/Rand.h"
#include "cinder/ImageIo.h"
#include "cinder/app/KeyEvent.h"
#include "cinder/Text.h"
//my includes
#include "vincensdStarbucks.h"

using namespace ci;
using namespace ci::app;
using namespace std;




class HW04_vincensdApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void keyDown( KeyEvent event );
	void update();
	void draw();
	void prepareSettings(Settings* settings);

	private:
	
		//Width and height of the screen
		static const int AppWidth=800;
		static const int AppHeight=600;
		static const int TextureSize=1024; //Must be the next power of 2 bigger or equal to app dimensions
};


void HW04_vincensdApp::prepareSettings(Settings* settings){
	settings->setWindowSize(AppWidth,AppHeight);
	settings->setResizable(false);
}


void HW04_vincensdApp::setup()
{


		/**
		CONSTRUCT object
		*/
	
			/** Read in .csv file
			// Call  build(Entry* c, int n); //
	
			*/
			build("Starbucks_2006.csv", 7544); 

		/**
		Test Some Data to output our results
		// input something // cin >>
		Entry* getNearest(double x, double y) {


		//get output, dereference addy to get value
		cout << *Entry;
		std::cin.get();


		*/


		/**
		DESTROY object
		*/


}

void HW04_vincensdApp::mouseDown( MouseEvent event )
{
}

void HW04_vincensdApp::update()
{
}

void HW04_vincensdApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( HW04_vincensdApp, RendererGl )
