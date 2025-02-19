/* This file was automatically generated by CasADi 3.6.7.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

int calc_J_3_tags_heading_fixed(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int calc_J_3_tags_heading_fixed_alloc_mem(void);
int calc_J_3_tags_heading_fixed_init_mem(int mem);
void calc_J_3_tags_heading_fixed_free_mem(int mem);
int calc_J_3_tags_heading_fixed_checkout(void);
void calc_J_3_tags_heading_fixed_release(int mem);
void calc_J_3_tags_heading_fixed_incref(void);
void calc_J_3_tags_heading_fixed_decref(void);
casadi_int calc_J_3_tags_heading_fixed_n_in(void);
casadi_int calc_J_3_tags_heading_fixed_n_out(void);
casadi_real calc_J_3_tags_heading_fixed_default_in(casadi_int i);
const char* calc_J_3_tags_heading_fixed_name_in(casadi_int i);
const char* calc_J_3_tags_heading_fixed_name_out(casadi_int i);
const casadi_int* calc_J_3_tags_heading_fixed_sparsity_in(casadi_int i);
const casadi_int* calc_J_3_tags_heading_fixed_sparsity_out(casadi_int i);
int calc_J_3_tags_heading_fixed_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
int calc_J_3_tags_heading_fixed_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define calc_J_3_tags_heading_fixed_SZ_ARG 12
#define calc_J_3_tags_heading_fixed_SZ_RES 1
#define calc_J_3_tags_heading_fixed_SZ_IW 0
#define calc_J_3_tags_heading_fixed_SZ_W 73
int calc_gradJ_3_tags_heading_fixed(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int calc_gradJ_3_tags_heading_fixed_alloc_mem(void);
int calc_gradJ_3_tags_heading_fixed_init_mem(int mem);
void calc_gradJ_3_tags_heading_fixed_free_mem(int mem);
int calc_gradJ_3_tags_heading_fixed_checkout(void);
void calc_gradJ_3_tags_heading_fixed_release(int mem);
void calc_gradJ_3_tags_heading_fixed_incref(void);
void calc_gradJ_3_tags_heading_fixed_decref(void);
casadi_int calc_gradJ_3_tags_heading_fixed_n_in(void);
casadi_int calc_gradJ_3_tags_heading_fixed_n_out(void);
casadi_real calc_gradJ_3_tags_heading_fixed_default_in(casadi_int i);
const char* calc_gradJ_3_tags_heading_fixed_name_in(casadi_int i);
const char* calc_gradJ_3_tags_heading_fixed_name_out(casadi_int i);
const casadi_int* calc_gradJ_3_tags_heading_fixed_sparsity_in(casadi_int i);
const casadi_int* calc_gradJ_3_tags_heading_fixed_sparsity_out(casadi_int i);
int calc_gradJ_3_tags_heading_fixed_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
int calc_gradJ_3_tags_heading_fixed_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define calc_gradJ_3_tags_heading_fixed_SZ_ARG 12
#define calc_gradJ_3_tags_heading_fixed_SZ_RES 1
#define calc_gradJ_3_tags_heading_fixed_SZ_IW 0
#define calc_gradJ_3_tags_heading_fixed_SZ_W 190
int calc_hessJ_3_tags_heading_fixed(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int calc_hessJ_3_tags_heading_fixed_alloc_mem(void);
int calc_hessJ_3_tags_heading_fixed_init_mem(int mem);
void calc_hessJ_3_tags_heading_fixed_free_mem(int mem);
int calc_hessJ_3_tags_heading_fixed_checkout(void);
void calc_hessJ_3_tags_heading_fixed_release(int mem);
void calc_hessJ_3_tags_heading_fixed_incref(void);
void calc_hessJ_3_tags_heading_fixed_decref(void);
casadi_int calc_hessJ_3_tags_heading_fixed_n_in(void);
casadi_int calc_hessJ_3_tags_heading_fixed_n_out(void);
casadi_real calc_hessJ_3_tags_heading_fixed_default_in(casadi_int i);
const char* calc_hessJ_3_tags_heading_fixed_name_in(casadi_int i);
const char* calc_hessJ_3_tags_heading_fixed_name_out(casadi_int i);
const casadi_int* calc_hessJ_3_tags_heading_fixed_sparsity_in(casadi_int i);
const casadi_int* calc_hessJ_3_tags_heading_fixed_sparsity_out(casadi_int i);
int calc_hessJ_3_tags_heading_fixed_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
int calc_hessJ_3_tags_heading_fixed_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define calc_hessJ_3_tags_heading_fixed_SZ_ARG 12
#define calc_hessJ_3_tags_heading_fixed_SZ_RES 1
#define calc_hessJ_3_tags_heading_fixed_SZ_IW 0
#define calc_hessJ_3_tags_heading_fixed_SZ_W 617
#ifdef __cplusplus
} /* extern "C" */
#endif
