int postUserExists(char* email){
    if(strcmp(email,"lucas")==0){
        return 0;
    }else{
        return 1;
    }
}

int isNumber(int number){
    while(getchar()!='\n'){
        return 0;
    }
    return 1;
}

int userExist(char* email, char* password){
    FILE *usersFile;
    usersFile = fopen("users.txt","a+");
    struct USER user;
    while(fread(&user,sizeof(user),1,usersFile)!=0){
        if(strcmp(password,"")==0){
            printf("%i",strcmp(email,user.email));
            getch();
            if(strcmp(email,user.email)== 0){
                fclose(usersFile);
                return 0;
            }
        }else{
            if(strcmp(email,user.email)== 0 && strcmp(password,user.password) == 0){
                fclose(usersFile);
                return 0;
            }
        }
    }
    fclose(usersFile);
    return 2;
}