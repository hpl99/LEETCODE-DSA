int lengthOfLastWord(char* s) { 
    // fgets(s, MAX, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    int len = strlen(s);
    int count = 0;
    int i = len - 1;
    while (i >= 0 && s[i] == ' ') {
        i--; 
    }
    while (i >= 0 && s[i] != ' ') 
    {
        count++;
        i--;
    }
    return count;
}