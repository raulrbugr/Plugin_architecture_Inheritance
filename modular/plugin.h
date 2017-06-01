#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Plugin {
 	protected:
		string name;
		string desc;

		// Array to store the plugin list
   		static vector<Plugin *> plugins;

  	public:
		//Constructor to regist the plugin
		Plugin();


   		string getName(){
			return name;
		}

		string getDesc(){
			return desc;
		}

		virtual void apply () = 0; // pure specifier

		static int n_plugins();

		//Function that return the pointer to the plugin that you call with the plugin name
		static Plugin* getPlugin(string name);


		//Function that returns one iterator
		static vector<Plugin*>::iterator get_iterator () ;
};

	//vector<Plugin *> Plugin::plugins;
