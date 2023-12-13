#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

typedef struct lists
{
	char *var;
	struct lists *next;
} lists;

char *_strdup(char *s, int ds);
lists *end_node (lists **head, char *s);
int cd_(char **s, lists *env, int i);
void _ctrl_C(int num);
void ctrl_d(int i, char *cmd, lists *env);
int del_size(char *s, char del);
int delete_node(lists **head, int i);
int delim_count(char *s, char delim);
list env_linked(char **v);
void couldnt_cd(char *s, int n, lists *env);
int print_env(char **str, list *v);
void illegal_num(char *s, lists *env, int n);
void cmd_not_found(char *s, int n, lists *env);
int exec_cd(lists *env, char *curr_dir, char *dir_path, char *s, int  n);
int ex(char **s, list_t *env, int n, char **com);
void free_double_ptr(char **s);
void free_list(lists *h);
char *get_environ(char *str, lists *v);
void home_cd(lists *env. char *curr_dir);
char *ignore_wht_space(char *s);
char *ignore_spc(char *s);
int in_built(char **tkn, lists *env, int n, char ** cmd);int int_len(int num);
char *ito_str(int num);
int len(int n);
char *_itos(int num);
size_t _line(char **s);
void non_interact(lists *env);
size_t write_list(lists *l);
int _promt(char **env);
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size);
char *rm_delim(char *s, char delim);
int set_env(lists **env, char *env_name, char *dir_path);
int stoi(char *s);
char *str_concat(char *dest, char *src);
char **str_token(char *s, char *delim);
char *strconcat(char *dest, char *src);
int strcompare( char *str1, char *str2);
char *strcopy(char *d, char *s);
char *strduplicate(char *str);
int tkn_len(char *s, int index, char delimiter);
char **tokenize(char *s, char *del);
int find_environ(list v,char *str);
int _unsetenviron(lists **v, char **str);
int _setenviron(lists **v, char **str);
char _which(char *s, lists *env);

#endif /* MAIN_H*/
