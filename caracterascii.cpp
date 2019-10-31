/*Universidad Politécnica de Tulancingo
 *Ingeniería en Electrónica y Telecomunicaciones
 *Lógica y Programación
 *Víctor Manuel Alejandro Santillán Sánchez
 *Programa para listar los símbolos y códigos ascii imprimibles
 */

#include "PCH.H"

int main() {
	//ASCII de implrimibles
	unsigned char cara = 32;
	while (cara < 128) {
		printf("El valor %d o %x es el símbolo %c\n", cara, cara, cara);
		cara = cara + 1;
	}
	//Jerarquia de operaciones
	printf("No es lo mismo %f que %f\n", 7.0 + 3.0 / 2.0, (7.0 + 3.0) / 2.0);
}
