# ifndef __DB_H__
# define __DB_H__

# ifdef __cplusplus
	extern "C" {
#endif

extern char ** 			rdb_fetch_row(void *);
extern int 			rdb_ncol(void *);
extern int 			rdb_attach(const char *);
extern int 			rdb_close_cursor(void *);
extern int 			rdb_commit();
extern char * 			rdb_data(void *, int);
extern void * 			rdb_declare_cursor(char *, char *);
extern int 			rdb_detach();
extern int 			rdb_exec(void *);
extern int 			rdb_execi(char *);
extern int 			rdb_fetch(void *);
extern int 			rdb_free(void *);
extern int 			rdb_open_cursor(void *);
extern void * 			rdb_prepare(char *);
extern int 			rdb_rollback();
extern int 			rdb_set_readonly();
extern const char *		rdb_error();
extern int 			rdb_sqlcode();

# ifdef __cplusplus
	}
#endif

# endif
