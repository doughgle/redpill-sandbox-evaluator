#include <cpuid.h>
#include <stdio.h>

int is_hypervisor_present()
{
  unsigned int eax, ebx, ecx, edx;
  __get_cpuid(0x1, &eax, &ebx, &ecx, &edx);
  if  (ecx & 0x80000000) {
    return 1;
  }
  return 0;
}

int main (void)
{
  return is_hypervisor_present();
}
