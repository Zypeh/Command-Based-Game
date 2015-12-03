#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "04";
	static const char MONTH[] = "12";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.12";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 1;
<<<<<<< HEAD
	static const long BUILD  = 59;
	static const long REVISION  = 2114;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 328;
	#define RC_FILEVERSION 0,1,59,2114
	#define RC_FILEVERSION_STRING "0, 1, 59, 2114\0"
	static const char FULLVERSION_STRING [] = "0.1.59.2114";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 60;
=======
	static const long BUILD  = 57;
	static const long REVISION  = 2070;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 316;
	#define RC_FILEVERSION 0,1,57,2070
	#define RC_FILEVERSION_STRING "0, 1, 57, 2070\0"
	static const char FULLVERSION_STRING [] = "0.1.57.2070";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 58;
>>>>>>> origin/master
	

}
#endif //VERSION_H
