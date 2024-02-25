typedef struct octree
{

XYZR Min, Max; /* Limites do nodo */
char codigo; /* PRETO, BRANCO, CINZA */
struct octree *oct[8]; /* 8 nodos-filhos*/

}OCTREE;

/* PRETO : nodo TODO ocupado pelo objeto */

/* BRANCO : nodo NÃO ocupado pelo objeto */

/* CINZA : nodo PARCIALMENTE ocupado pelo objeto */

CriaArvore(Sólido, OCTREE *raiz, nível)

{

C = Classifica(Objeto, raiz->Min, raiz->Max);
if (C = PRETO) raiz->codigo = PRETO;
if (C = BRANCO) raiz->codigo = BRANCO;
if (C = CINZA)
{

raiz->codigo = CINZA;
subdivide(raiz); /* gera os oito filhos */
for(i=0;i<8;i++)
{ /* chama a função de criação */
        CriaArvore(Sólido, raiz->oct[i], nível-1);
}

}

}