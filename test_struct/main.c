#include <stdio.h>
/*
struct	tests {
	size_t	test1;
	size_t	test2;
	char	*test3;
};


int main(void)
{
	struct	tests value;

	value.test1 = 12;
	value.test2 = 15;
	value.test3 = "salut";

	printf("%d,	%d,	%f\n");
}
*/
/*
void  ma_fonc(int	*x)
{
	*x = 41;
}

int main(void)
{
  int x = 42;

  ma_fonc(&x);

  if (x == 41)
    printf("Success!\n");
  else
    printf("bad nonono >:(\n");
  return (0);
}
*/
#include <string.h>

struct eglise_a_roux {
  int	nombre_de_roux;
  char	*nom_du_roux_pasteur;
  int	quantite_de_parts_de_tarte_a_la_citrouille;
};

// Ecrire la fonction ici
void  init_toutes_les_variables_du_struct(struct eglise_a_roux *mon_eglise)
{
	(*mon_eglise).nombre_de_roux = 8;
	mon_eglise->nom_du_roux_pasteur = "jonathan";
	mon_eglise->quantite_de_parts_de_tarte_a_la_citrouille = 23;
}

int main(void)
{
  struct eglise_a_roux mon_eglise;

  init_toutes_les_variables_du_struct(&mon_eglise);

  if (mon_eglise.nombre_de_roux == 8 && strcmp(mon_eglise.nom_du_roux_pasteur, "jonathan") == 0 && mon_eglise.quantite_de_parts_de_tarte_a_la_citrouille == 23)
    printf("Success!\n");
  else
    printf("bad nonono >:(\n");
  return (0);
}
