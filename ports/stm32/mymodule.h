#ifndef MYMODULE_HEADER_H
#define MYMODULE_HEADER_H

mp_obj_t mymodule_hello_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args);
STATIC void mymodule_hello_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind);
STATIC mp_obj_t mymodule_hello_increment(mp_obj_t self_in);
STATIC mp_obj_t mymodule_hello(mp_obj_t what);

const mp_obj_type_t mymodule_hello_type;

#endif
