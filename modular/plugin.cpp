#include "plugin.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

		//Contructor to regist the plugin
		//When the son class create one object calls to the father constructor
		Plugin::Plugin(){
			
			plugins.push_back(this);
		}


   		/*Plugin::string getName(){
			return name;
		}

		Plugin::string getDesc(){
			return desc;
		}*/

		

		 int Plugin::n_plugins(){
			return plugins.size();
		}


		//Funcion that return the pointer to the plugin that you call with the plugin name
		 Plugin* Plugin::getPlugin(string name){
			bool encontrado =false;
			vector<Plugin *>::iterator it;
			Plugin *p=0;
			
			

			
			for(int i=0; i< plugins.size(); i++){
				cout<<plugins[i]->getName();
				if(plugins[i]->getName() ==name){
					p=plugins[i];
					encontrado=true;
				}
			}
			return p;
		}


		//Funcion that return one iterator
		 vector<Plugin*>::iterator Plugin::get_iterator () {
			return plugins.begin();
		}

	vector<Plugin *> Plugin::plugins;
