#include<stdio.h>
class Provincia{
	char *parroquia, *canton;
	int habitantes;
	
	public:
		void insertar_canton(char x[30]){
		 canton=x;
	}
	    void insertar_parroquia(char y[30]){
	     parroquia=y;	
	    }
	    void insertar_habitantes(int z){
	    	habitantes=z;
	    }
	void mostrar(){
		printf("canton:%s\n",canton);
		printf("parroquia:%s\n",parroquia);
		printf("habitantes:%d\n",habitantes);
	}

};
int main(){
	Provincia Tungurahua;
	Tungurahua.insertar_canton("Ambato");
	Tungurahua.insertar_parroquia("Izamba");
	Tungurahua.insertar_habitantes(10);
    Tungurahua.mostrar();
    return 0;}
