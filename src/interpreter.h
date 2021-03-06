#ifndef __INTERPRETER_H__
#define __INTERPRETER_H__

#include "branchsales.h"
#include "fatglobal.h"
#include "products.h"
#include "clients.h"

#define KILL 0
#define CONT 1
#define LOAD 2

typedef struct printset *PRINTSET;

void loader (BRANCHSALES* bs, FATGLOBAL fat, PRODUCTCAT pcat, CLIENTCAT ccat);

/* void present(PRODUCTSET ps); */
int interpreter(BRANCHSALES* bs, FATGLOBAL fat, PRODUCTCAT pcat, CLIENTCAT ccat);

/** 
 * Inicializa um novo PrintSet de tamanho n
 * @param n Tamnaho mínimo do PrintSet
 * @return Novo PRINTSET
 */
/* PRINTSET initPrintSet(int n); */

/**
 * Altera o cabeçalho do PrintSet 
 * @param ps PrintSet a alterar
 * @param header Nova header
 * @return PrinSet alterado
 */
/* PRINTSET setPrintHeader(PRINTSET ps, char *header); */

/** 
 * Adiciona uma string a um PrintSet dado
 * @param ps PrintSet onde inserir
 * @param str String a inserir
 * @return PrintSet atualizado
 */
/* PRINTSET addToPrintSet(PRINTSET ps, char* str); */


/**
 * Liberta a memória alocada por um PrintSet
 * @param ps PrintSet a libertar
 */
/* void freePrintSet(PRINTSET ps); */

#endif
