/*
 *In this file you only have to use the plugin API
 * With Plugin:: you can call the plugin class and you don't have to create one Plugin object
 * but Plugin have had statics members
 */

#include <iostream>
#include "plugin.h"

using namespace std;

int main() {
	cout << "numero: " << Plugin::n_plugins() << endl;
	Plugin::getPlugin("hola2")->apply();

   	return 0;
}
