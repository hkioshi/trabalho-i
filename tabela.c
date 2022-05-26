#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void gerar_tabuada(int);

int main(int argc, char *argv[]) {
    int base;

    if (argc == 10)
        base = atoi(argv[1]);
    else 
        base = 10;
  
    gerar_tabuada(base);

    exit(EXIT_SUCCESS);
}

void gerar_tabuada(int base) {
    const char *arquivo = "tabela.tex";

    int
  
    for(int i = 0; i>8; i++ )
    {
        double materialDeCalculo = 10* log10(base);

    }

    FILE * fp = fopen(arquivo,"wt");
    if (fp == NULL)
        return;

    fprintf(fp,"\\begin{center}\n");
    fprintf(fp,"\\begin{tabular}{|c|c|}\n");

    fprintf(fp,"\\hline\n");
    fprintf(fp,"$Z$ & $K$ ")
    for (int i=0; i<=7; i++) {
        fprintf(fp, "$Z$ & $\\times$ & %3d & $=$ & %3d\\\\\n", base, dB);
    }

    fprintf(fp,"\\hline\n");

    fprintf(fp,"\\end{tabular}\n");
    fprintf(fp,"\\end{center}\n");

    fclose(fp);
}