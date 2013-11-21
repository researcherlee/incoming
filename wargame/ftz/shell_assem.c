#include <unistd.h>

int main()
{
        __asm__ __volatile__ (
                        "xor %ecx, %ecx\n\t"
                        "push %ecx\n\t"
                        "push $0x68732f2f\n\t"
                        "push $0x6e69622f\n\t"
                        "mov %ecx, %edx\n\t"
                        "mov %esp, %ebx\n\t"
                        "push %edx\n\t"
                        "push %ebx\n\t"
                        "mov %ecx, %eax\n\t"
                        "mov %esp, %ecx\n\t"
                        "movb $0xb, %al\n\t"
                        "int $0x80\n"
                        );


}

