/*
 *This is one example that how have to be the plugin source file
 *
 */


#include "filter1.h"

	
	Filtro::Filtro(){
				name = "hola1";
				desc = "hola";
				
	}

	//Implements here the funtionality of this plugin
	void Filtro::apply () {
		cout<<"filtro1"<<endl;	
	}

	static Filtro f;
