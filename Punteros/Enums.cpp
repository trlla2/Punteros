#include <iostream>

//error: no puedes tener las mismas constantes en los enums
//error: no puedes tener una variable con el mismo nombre que una enum
//error: si comparas dos valores de enums distintos compara su posicion y no su valor, en el caso de que quieras comparar dos enum class diferentes por su numero puedes castear a int

//todos estos errores se solucionan con el enum class

enum class Weapons {
	FISTS,
	GUN,
	SHOTGUN,
	SNIPER,
	BOW,
	COUNT,
	INVALID
};

enum class Outfit {
	JERSEY,
	PANTALON,
	BOW,
	COUNT
};

int main() {
	
}