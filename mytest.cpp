/*Estoy caminando repitiendo el mismo punto o quedandome quieto, a lo random
Esto es solo un test para ver si de verdad funciona el bot de telegram*/

#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>

using namespace std;

typedef pair<int, int> P_ii;
typedef vector<P_ii> V_ii;

int main() {
	V_ii v1{make_pair(0,0), make_pair(4,5), make_pair(2,2)};
	
	srand(time(NULL));
	
	int pos_walk;
	
	for(int i = 0; i < v1.size(); i++){
		pos_walk = 1 + rand() % v1.size() - 1;
		cout << "Walking to pos: (" << get<0>(v1[pos_walk]) << ',' << get<1>(v1[pos_walk]) << ')' << endl;
	}
	return 0;
}
