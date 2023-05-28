// An alternate rule for translating if statements into goto code is as follows:
// t = test-expr;
// if (t)
// goto true;
// else-statement
// goto done;
// true:
// then-statement
// done:
// Rewrite the goto version of cond based on this alternate rule.
void cond(short a, short *p)
{
    if (a && *p < a)
    *p = a;
}

void cond(short a, short *p) {
  if (a) {
    goto success;
  }
  if (*p < a) {
    goto success;
  }

success:
  *p = a;
}
