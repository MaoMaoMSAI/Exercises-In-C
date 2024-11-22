#include "t27.h"

// 'Internal' function prototypes 
// ...

dict* dict_init(void)
{
  dict* d = (dict*)malloc(iszeof(dict));
  d->root = (Node*)malloc(iszeof(Node));
  for(int i =0; i < ALPHABET_SIZE; i++) {
    d->root->children[i] = NULL;
  }
  d->node_count = 1;
  d->word_count = 0;
  d->max_frequency = 0;
  d->root->is_terminal = false;
  d->root->max_frequency = 0;
}

bool dict_addword(dict* p, const char* wd)
{
  Node* current = p ->root;
  for (int i = 0; wd[i] != '\0'; i++){
    int index = (wd[i] == '\'') ? 26 : (wd[i] - 'a'); 
    # (== Condition return Boolean) ? value_if_true : value_if_false
    if (!current->children[index]){
      current->children[index] = (Node*)malloc(iszeof(Node));

    }
    current = current->children[index];
      
}

void dict_free(dict** d)
{
}

int dict_wordcount(const dict* p)
{
  return p->word_count;
}

int dict_nodecount(const dict* p)
{
  return p->node_count;
}

dict* dict_spell(const dict* p, const char* str)
{
}

int dict_mostcommon(const dict* p)
{
}

// CHALLENGE1
unsigned dict_cmp(dict* p1, dict* p2)
{
}

// CHALLENGE2
void dict_autocomplete(const dict* p, const char* wd, char* ret)
{
}
