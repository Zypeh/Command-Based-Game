#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "07";
	static const char MONTH[] = "07";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.07";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 0;
	static const long BUILD  = 68;
	static const long REVISION  = 931;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 171;
	#define RC_FILEVERSION 0,0,68,931
	#define RC_FILEVERSION_STRING "0, 0, 68, 931\0"
	static const char FULLVERSION_STRING [] = "0.0.68.931";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 68;
	

}
#endif //VERSION_H
