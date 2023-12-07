void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_alphabet()
{
    char letter = 'a';
    while (letter <= 'z') {
        my_putchar(letter);
        letter++; 
    }
    write(1, "\n", 1);
}