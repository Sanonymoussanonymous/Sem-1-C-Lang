#include <stdio.h>
# define    MAXLINE 1000/* max input line size */

char getline( char line[], int maxline);
void copy( char to[], char from[]);
int main(){
    int len,max;
    char line[ MAXLINE ];
    char longest[ MAXLINE];

    max = 0;
    while( (len = getline (line,MAXLINE)) > 0)

    if ( len>max ){
        max = len ;
        copy (longest, line);
    }
    if( max > 0 ) /* checking whether a sentence was written or not*/
        printf("%s", longest );
}

/*getline define*/
char getline( char s[],int lim)
{
    int c,i ;

    for (i = 0; i < lim - 1 && ( c = getchar())!= EOF && c!='\n'; ++i){
        s[i] = c;
        if (c == '\n'){
            s[i] = c;
            ++i;
        }
        s[i] = '\0';
    }
}

void copy ( char to[], char from[])
{
    int i;

    i = 0;
    while ( (to[i] = from[i]) != '\0' )
    ++i;
    
}