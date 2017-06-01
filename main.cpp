/*
 * Plugin architecture in the same file
 *
 */

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
		//Contructor que registra el plugin
		Plugin(){
			plugins.push_back(this);
		}


   		string getName(){
			return name;
		}

		string getDesc(){
			return desc;
		}

		virtual void apply () = 0; // pure specifier

		static int n_plugins(){
			return plugins.size();
		}


		//Funcion que devuelve el puntero al plugin que le pasamos como parámetro
		static Plugin* getPlugin(string name){
			bool encontrado =false;
			vector<Plugin *>::iterator it;
			Plugin *p=0;
			
			/*for(it=plugins.begin(); it != plugins.end() && !encontrado; ++it){
				/*if(it.getName() == name){
					p=it;
					encontrado=true;
				}*/
				/*cout<< *it->getName()<<endl;
			}*/

			
			for(int i=0; i< plugins.size(); i++){
				cout<<plugins[i]->getName();
				if(plugins[i]->getName() ==name){
					p=plugins[i];
					encontrado=true;
				}
			}
			return p;
		}


		//Función que devuelve el iterador a la lista de plugins
		static vector<Plugin*>::iterator get_iterator () {
			return plugins.begin();
		}
};

vector<Plugin *> Plugin::plugins;


class Filtro : public Plugin {
  	public:
   		Filtro(){
			name = "hola1";
			desc = "hola";
		}
	//Implementar esto, aqui se corre el filtro
	void apply () {
		cout<<"filtro1"<<endl;	
	};
};

static Filtro f;

class Filtro2 : public Plugin {
  	public:
   		Filtro2(){
			name = "hola2";
			desc = "hola";
		}
	void apply () {
		cout<<"filtro2"<<endl;	
	};
};

static Filtro2 f2;

class Filtro3 : public Plugin {
  	public:
   		Filtro3(){
			name = "hola3";
			desc = "hola";
		}
	void apply () {
		cout<<"filtro3"<<endl;	
	};
};

static Filtro3 f3;


int main() {
	cout << "numero: " << Plugin::n_plugins() << endl;
	Plugin::getPlugin("hola1")->apply();

   	return 0;
}
