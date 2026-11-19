char* longestCommonPrefix(char** strs, int strsSize) {
 if (strsSize == 0) return "";
    // Take the first string as the initial reference prefix
    char* prefix = strs[0];
    
    for (int i = 1; i < strsSize; i++) {
        // Trim the prefix until it matches the start of strs[i]
        while (strstr(strs[i], prefix) != strs[i]) {
            prefix[strlen(prefix) - 1] = '\0';
            if (prefix[0] == '\0') return "";
        }
    }
    
    return prefix;
}