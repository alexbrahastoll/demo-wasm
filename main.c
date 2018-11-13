#include <stdio.h>

// A simple program that generates the Fibonacci sequence up to a certain
// element.
int main(int argc, char ** argv) {
  int gen_seq_up_to = 30;
  int seq[gen_seq_up_to];

  seq[0] = 1;
  seq[1] = 1;
  printf("%d, %d, ", seq[0], seq[1]);

  int i;
  for (i = 2; i < gen_seq_up_to; i++) {
    seq[i] = seq[i - 2] + seq[i - 1];
    printf("%d, ", seq[i]);
  }
}
