#include <stdio.h>
#include <math.h>
#include "var.h"
#include "max.h"
#include "min.h"

int main ()
{
	int n=7,t[]={13,12,5,1,19,13,17},val_max,val_min,sup,inf;
	float val_var;
	
	var(t,n,&val_var);
	max(t,n,&val_max);
	min(t,n,&val_min);

	sup=ceil(val_var);
	inf=floor(val_var);

	printf("Le maximum du tableau est %d et son minimum est %d.\nLa variance de la série est de %f.\n",val_max,val_min,val_var);
	printf("La variance peut être arrondi au supérieur à %d, ou à l'inférieur à %d.\n",sup,inf);
	return 0;
}
