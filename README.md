# paradigmas

repaso:
cursa(calculo, juan).
cursa(calculo, pedro).
cursa(calculo, maria).
cursa(algebra, juan).
cursa(algebra, patricia).
cursa(estadistica, lucas).
cursa(elementos, pedro).
cursa(elementos, luisa).
cursa(elementos,ana).

alumnoRegular(X):- cursa(Y,X) , cursa(P,X), Y\=P.
compañeros(X,Y):- cursa(U,X) , cursa(U,Y), X\=Y.

alumnosRegulares(X):- cursa(U,X), cursa(P,X), U\=P.
comunCalculo(P):- cursa(calculo,X), cursa(P,X), P\=calculo.

cursaUna(M,X):- cursa(M,X), \+alumnoRegular(X). %aca digo cursa materia M y esa persona es X
% le digo tambien que x no es algumno regular, gracias a cursa(M,X) me devuelve la lista de 
%alumnos y materias

