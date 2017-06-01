/*
 *This is one example that how have to be the plugin header file
 *
 */

#include "plugin.h"

using namespace std;

class Filtro : public Plugin {
  	public:
   		Filtro();
	
		void apply ();
};
