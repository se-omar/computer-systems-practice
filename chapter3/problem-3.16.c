// When given the C code
void cond(short a, short *p)
{
    if (a && *p < a)
    *p = a;
}
// gcc generates the following assembly code:
// void cond(short a, short *p)
// a in %rdi, p in %rsi
// cond:
// testq %rdi, %rdi
// je .L1
// cmpq %rsi, (%rdi)
// jle .L1
// movq %rdi, (%rsi)
// .L1:
// rep; ret
//
// write goto version of this code
void cond(short a, short *p) 
{
  if (a == 0 || *p >= a) {
    goto false_case
    *p = a;
  }

false_case: 
  return;
}
