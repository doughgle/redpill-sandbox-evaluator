#include <cpuid.h>
#include <stdio.h>

int main (void)
{
  int a, b, c, d;
  if (!__get_cpuid (0x1, &a, &b, &c, &d))
  {
    fprintf (stderr, "Warning: CPUID request 0x81234567 unsupported!\n");
  }
  printf ("EAX: %x\nEBX: %x\nECX: %x\nEDX: %x\n", a, b, c, d);

  if  (c & 0x80000000) {
    printf("hypervisor detected! Taking red pill..!\n");
    return 1;
  }
  system("ping 8.8.8.8 -c 1");
  return 0;
}
