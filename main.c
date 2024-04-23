#include <stdio.h>

int main (void){
	int n = 0, m = 0, a = 0, resuln = 0, resulm = 0, resultado = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++){
		scanf("%d", &a);
	       	resuln += a<<n-i-1;
	}

	for (int i = 0; i < m; i++){
		scanf("%d", &a);
		resulm += a<<m-i-1;		
	}

	resultado = resuln + resulm;
	printf("%d\n", resultado);
}
