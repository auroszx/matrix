//Dada la matriz de grafos aleatoria, obtener el grado de cada vértice.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int counter = 1;
int kounter = 1;
int verts = 1;
int a[6],b[6],c[6],d[6],e[6],f[6];
int gra = 0,grb = 0,grc = 0,grd = 0,gre = 0,grf = 0;
int i = 0;

void gimmeVerts() {
	printf("Introduce cuantos vertices (numero) debe tener la matriz: ");
    scanf("%i", &verts);
}

void randomMatrix() {
	for (counter = 1; counter <= verts; counter++) {
		srand(time(NULL));
        a[counter-1] = (rand() % 2);
		b[counter-1] = (rand() % 2);
		c[counter-1] = (rand() % 2);
		d[counter-1] = (rand() % 2);
		e[counter-1] = (rand() % 2);
		f[counter-1] = (rand() % 2);
    }
}

void printMatrix() {
	//printf("  a b c d e f ");
	if (verts >= 1) {
	printf("\na ");
	for (counter = 1; counter <= verts; counter++) {
		printf("%i ", a[counter-1]);
    }
	}

	if (verts >= 2) {
	printf("\nb ");
	for (counter = 1; counter <= verts; counter++) {
        printf("%i ", b[counter-1]);
    }
	}

	if (verts >= 3) {
	printf("\nc ");
	for (counter = 1; counter <= verts; counter++) {
        printf("%i ", c[counter-1]);
    }
	}

	if (verts >= 4) {
	printf("\nd ");
	for (counter = 1; counter <= verts; counter++) {
        printf("%i ", d[counter-1]);
    }
	}

	if (verts >= 5) {
	printf("\ne ");
	for (counter = 1; counter <= verts; counter++) {
        printf("%i ", e[counter-1]);
    }
	}

	if (verts >= 6) {
	printf("\nf ");
	for (counter = 1; counter <= verts; counter++) {
        printf("%i ", f[counter-1]);
    }
    printf("\n");
	}
}

void main() {
	gimmeVerts();
	if (verts == 0) {
		printf("No pueden ser 0 vertices.\n");
		gimmeVerts();
	}
	else if (verts >= 1 && verts <= 6) {
		randomMatrix();
   		printf("Usando la siguiente matriz de grafos generada de forma aleatoria:\n");
    	printMatrix();
		
    	printf("\n\nLos grados de cada vertice son: \n");
	

    	printf("\n");

	if (verts >= 1) {

	for (i = 0; (i <= verts); i++) {
		if (a[i] == 1) {
			gra = gra + 1;
		}
	}
	printf("a = %i\n", gra);
	}

	if (verts >= 2) {

	for (i = 0; (i <= verts); i++) {
		if (b[i] == 1) {
			grb = grb + 1;
		}
	}
	printf("b = %i\n", grb);
	}

	if (verts >= 3) {

	for (i = 0; (i <= verts); i++) {
		if (c[i] == 1) {
			grc = grc + 1;
		}
	}
	printf("c = %i\n", grc);
	}

	if (verts >= 4) {
	
	for (i = 0; (i <= verts); i++) {
		if (d[i] == 1) {
			grd = grd + 1;
		}
	}
	printf("d = %i\n", grd);
	}

	if (verts >= 5) {

	for (i = 0; (i <= verts); i++) {
		if (e[i] == 1) {
			gre = gre + 1;
		}
	}
	printf("e = %i\n", gre);
	}

	if (verts >= 6) {
	
	for (i = 0; (i <= verts); i++) {
		if (f[i] == 1) {
			grf = grf + 1;
		}
	}
	printf("f = %i\n", grf);		
	}

	}
	else if (verts > 6) {
		printf("Este programa trabaja con un maximo de 6 vertices.");
		gimmeVerts();
	}
}
