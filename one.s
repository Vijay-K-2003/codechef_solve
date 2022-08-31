    .file   "one.c"
    .text
    .globl  __thisone
    .def    __thisone;  .scl    2;  .type   32; .endef
__thisone:
LFB0:
    .cfi_startproc
    movl    8(%esp), %eax
    subl    4(%esp), %eax
    ret
    .cfi_endproc
LFE0:
    .ident  "GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
