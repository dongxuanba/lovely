// afuction for Write a function that cuts off the extra space in between, at the ends.Write a function that cuts off the extra space in between, at the ends.Write a function that cuts off the extra space in between, at the ends.
void removeSpace(char *str)
{
    int count = 0;
    for(int i= 0; str[i]; i++)
        if(str[i] != ' ')
        str[count] = str[i];
        str[count] = '\0';
}
int main() {
    char str[];
    printf("input str :");
    scanf("%s", str);
    removeSpace(str);
    cout << str;
    return 0;
}