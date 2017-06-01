#include "filter2.h"

	Filtro2::Filtro2(){
				name = "hola2";
				desc = "hola";
				cout<<"llamo desde F2"<<endl;
	}
	//Implementar esto, aqui se corre el filtro
	void Filtro2::apply () {
		cout<<"filtro2"<<endl;	
	}

	static Filtro2 f;
