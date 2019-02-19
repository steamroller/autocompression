#ifndef HUFFMAN_H
#define HUFFMAN_H

struct bizzare;
struct listuple *build_freq_list(char *input);
void *init_listuple(struct listuple *liste);
//void *init_listuple(struct listuple *liste);
int len_listuple(struct listuple *l);
struct bintree *build_tree(struct listuple *input);
struct bintree *recup_tree(struct bizzare *liste,int index);
int recup_occ(struct bizzare *liste, int index);
void pop(struct bizzare *b);
char *encodedata(struct bintree *h,char *input);
char *encodetree(struct bintree *tree);
int findbinary(struct bintree *B, char c);
char to_int(char *s);
struct gobelin *tobinarybis(char *input);
struct mousquetaire *compression(char *input);


#endif