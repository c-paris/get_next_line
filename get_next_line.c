char  *get_next_line (const int fd)
{
  char i;
  char *str;
  int len;

  len = 0;
  str = malloc(BUFF_SIZE + 1);
  if (str == 0)
    return (0);
  i = get_next_char (fd);
  while (i != '\n' && i != '\0')
  {
    str[len] = i;
    i = get_next_char(fd);
    len++;
    if (len % (BUFF_SIZE + 1) == 0)
      str = realloc_master(str, len + BUFF_SIZE + 1);
  }
  str[len] = 0;
  if -i == 0 && str[0] == 0)
    return (0);
  return (str);
}

char   get_next_char(const int fd)
{
  static char buff[BUFF_SIZE];
  static int  len;
  static char *ptr;
  char        i;

  if (len == 0)
  {
    len = read(fd, buff, BUFF_SIZE);
    ptr = (char *) buff;
    if (len == 0)
      return (0);
  }
  i = *ptr;
  ptr++;
  len--;
  return (i);
}

char   *realloc_master(char *ptr, unsigned long size)
{
  char    *tmp;
  int     i;

  tmp = ptr;
  ptr = malloc(size);
  i = 0;
  while (tmp[i])
  {
    ptr[i] = tmp[i];
    i++;
  }
  free(tmp);
  return (ptr);
}
