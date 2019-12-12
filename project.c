#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isAlphabet(char x) {
    return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}
int isDigit(char x) {
    return (x >= '0' && x <= '9');
}
int isInteger(char *val) {
    int i;
    for (i = 0; i < strlen(val); i++) {
        if (isDigit(val[i]) == 0)
            return 0;
    }
    return 1;
}
int isDouble(char *val) {
    int i;
    int f = 0;
    for (i = 0; i < strlen(val); i++) {
        if (isDigit(val[i]) == 0) {
            if (val[i] == '.') {
                if (f) {
                    return 0;
                }
                f = 1;
            } else {
                return 0;
            }
        }
    }
    if (f)
        return 1;
    else
        return 0;
}

struct IDENTIFIER {
    int type;
    char *varname;
    char *strval;
    int intval;
    double doubleval;
}id[1002];
struct IDENTIFIER maker(int typex, char *varnamex, char *valx) {
    struct IDENTIFIER data;
    data.type = typex;
    data.varname = (char *) malloc((strlen(varnamex)+1)*sizeof(char));
    strcpy((data).varname,varnamex);
    if (typex == 1) {
        (data).intval = atoi(valx);
    } else if (typex == 2) {
        (data).doubleval = atof(valx);
    } else if (typex == 3) {
        (data).strval = (char *)malloc((strlen(valx) + 1) * sizeof(char));
        strcpy((data).strval,valx);
    }
    return data;
}
int isCreated(int sz,char *varname) {
    int i,ans=-1;
    for(i=0;i<sz;i++){
        if(strcmp(id[i].varname,varname)==0) {
            ans=i;
            break;
        }
    }
    return ans;
}
void insert(int sz,struct IDENTIFIER newdata) {
    id[sz]=newdata;
    return;
}
int addNewID(int sz,char *str,char *val) {
    if(isCreated(sz,str)!=-1)
        return 0;
    int type = 4;
    if(isInteger(val))
        type=1;
    else if(isDouble(val))
        type=2;
    else if(strlen(val)>0)
        type=3;
    struct IDENTIFIER tmp=maker(type,str,val);
    insert(sz,tmp);
    return 1;
}
void assignVal(int sz, char *str, char *val) {
    int idx = isCreated(sz,str);
    if(idx==-1) {
        addNewID(sz,str,val);
    } else {
        int type = 4;
        if(isInteger(val))
            type=1;
        else if (isDouble(val))
            type = 2;
        else if (strlen(val) > 0)
            type = 3;
        id[idx]=maker(type,str,val);
    }
}
void print(struct IDENTIFIER data) {
    if((data).type==1) {
        printf("%d\n",(data).intval);
    } else if((data).type==2) {
        printf("%f\n",(data).doubleval);
    } else if((data).type==3) {
        printf("%s\n",(data).strval);
    } else {
        printf("none\n");
    }
}