#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func_p();
void func_i1();
void func_i2();
void func_i3();
void func_c1();
void func_c2();
void func_l1();
void func_l2();
void func_l3();
void func_a();
void func_s();
void func_f1();
void func_f2();

main()
{
    system("color 4F");

    char ch;

    printf("\n\t\t\t\t  !WELCOME!\n\n\t\t\t\t     TO");
    printf("\n\n\t\t\t\"LEARNING BASIC C PROGRAMMING\" ");

    printf("\n\n\n\nDo you want to learn C programming via C programming???");
    printf("\n'Y' or 'y' for Yes:");
    scanf("%c",&ch);

    for(; ;)
      {
          switch(ch)
          {
              case 'Y':
              case 'y': func_p();
                        break;
              case 'N':
              case 'n': printf("Hope you will be back soon...");
                        exit(0);
                        break;
          }
          printf("\n\nDo you want to continue learning???");
          printf("\n'Y or y' for yes:");
          ch=getchar();
          scanf("%c",&ch);

          if(ch=='Y' || ch=='y')
             {

             }
          else
          {
              printf("\nHope you will be back soon....\n\nThank You!\n\n");
              break;
          }
      }
}

void func_p()
{
    char com[100],i[1000],c[300],l[300],a[300],s[300],f[300];

    printf("\n\nWhich part of the C programming you want to learn?\n\n1.Introduction\n2.Condition\n3.Loop\n4.Array\n5.String\n6.Function");

    printf("\n\nPlease enter the complete topic name as it is given:");
    scanf("%s",com);

    if(!strcmp(com,"Introduction"))
    {
        strcpy(i,"\n\n\n\t\t\t\t1.INTRODUCTION\n\nHere we will learn some basic things about C programming and how to write code for a program.\n\nIf we want to write code for any program, we need a header file. Such as:stdio.h, string.h, stdlib.h etc. We use different header file for different kind of program. Now we will use only one header file called 'stdio.h'. And this header file is going to be declared like '#include<stdio.h>'.\n\nThen we will need the main function which will be declared like 'main()'. After that we will write the main program between '{ }'. Here we will use many kind of variables and to use those variables we have to declare variable types such as:int, float, char, double. If we want to print any integer(int) number we will have to use '%d'. Like this we will use '%f' , '%c' for float number and character respectively. In the main function there will also be a return type. We can use 'return 0' as a return type. And this is how you can write the code for a simple program. ");
        printf("%s",i);

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_i1();

        printf("\n\nWe can also take the input from users. If we want to do that we have to use 'scanf(\"%%d\")'. Here we are using '%%d' because of integer number. For float and character we will use '%%f' & '%%c' respectively.");

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_i2();

        printf("\n\nDo you want to learn using 'Character'?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
        {
            strcpy(i,"\n\n1.1->CHARACTER\n\nAlthough numbers are important, but your program will also need to read 'characters' from the keyboard. In C we can do this in a variety of ways. But right now we are going to begin with the tradition way 'characters' are read from the keyboard.\n\nC defines a function called 'getchar()', which returns a single character typed on the key board. When called, the function waits for a key to be pressed. Then 'getchar()' echoes the keystroke to the screen and returns the value of the key to the caller. The program illustrates it's use by reading a character and then telling you what it received. To display a character we have to use '%c'. ");
            printf("%s",i);

            printf("\n\nDo you want an example?");
            printf("\n'Yes' or 'No':");
            scanf("%s",com);

            if(!strcmp(com,"Yes"))
                func_i3();
        }
    }

    else if(!strcmp(com,"Condition"))
    {
        strcpy(c,"\n\n\n\t\t\t\t2.CONDITION\n\nHere we will learn how to use condition in C programming. Usually we use these types of condition in C. Such as: if, if-else. The 'if' statement is one of C's 'selection statements', sometimes called 'conditional statements'. It's operation is governed by the outcome of a conditional test that evaluates either true or false. If the expression is true, the statement will be executed. If it does not, the statement will be bypassed.\n\nWe can also add an 'else' statement to the 'if'. It will work like this-if the expression is true, then the target of the 'if' will execute and 'else' portion will be skipped. However, if the expression is false, then the target of the 'if' will be bypassed and the target of the 'else' will execute. Now if we see an example then we will understand it properly and we will also learn how to declare this type of condition.");
        printf("%s",c);

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_c1();

        strcpy(c,"\n2.1 -> NESTED IF\n\nWhen an 'if' statement is the target of another 'if' or 'else', it is said to be 'nested' within the outer 'if'. The expression are evaluated from the top downward. As soon as a true condition is found, the statement associated with it is executed and the rest of the ladder is bypassed. If none of the expressions are are true, then the final 'else' will be executed. That is, if all other conditional tests fail, the last 'else' statement will be performed. If the final 'else' is not present, no action will take place. Now, if we see an example we will understand it properly.");

        printf("\n\nDo you want to learn 'nested if'?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
        {
            printf("%s",c);

            printf("\n\nDo you want an example?");
            printf("\n'Yes' or 'No':");
            scanf("%s",com);

            if(!strcmp(com,"Yes"))
                func_c2();
        }
    }

    else if(!strcmp(com,"Loop"))
    {
        strcpy(l,"\n\n\n\t\t\t\t  3.LOOP\n\nThere are several types of loops in C programming. Such as: for loop, while loop, do loop. Here we will briefly discuss about all the three loops.\n\n3.1->FOR LOOP\n\nThe 'for' loop is one of C's three loop statements. it allows one or more statements to be repeated. The 'for' loop is considered by many C programmers to be it's most flexible loop. Although the 'for' loop allows a large number of variations, we will examine only it's common form in this section.\n\nThe 'for' loop is used to repeat a statement or block of statements a specified number of times. The initialization section is used to give an initial value to the variable that controls the loop. This variable is usually referred to as the 'loop-control' variable. The initialization section is executed only once, before the loop begins. The 'conditional-test' portion of the loop tests the 'loop-control' variable against a target value. If the 'conditional-test' evaluates true, the loop repeats. If it is false, the loop stops and program execution picks up with the next line of code that follows the loop. The 'conditional-test' is performed at the start or top of the loop each time the loop is repeated. The 'increment' portion of the 'for' is executed at the bottom of the loop. That is, the 'increment' portion is executed after the statement or block that forms it's body has been executed. The purpose of the increment portion is to increase(or decrease) the 'loop-control' value by a certain amount. ");
        printf("%s",l);

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_l1();

        printf("\n\nDo you want to learn 'while' loop?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
        {
            strcpy(l,"\n\n\n3.2->WHILE LOOP\n\nAnother of C's loops is 'while'.\n\nThe target of 'while' may also be a block of code. The 'while' loop works by repeating it's target as long as the expression is true. When it becomes false, the loop stops. The value of the expression is checked at the top of the loop. This means that if the expression is false to begin with, the loop will not execute even once. An example is given below. ");
            printf("%s",l);

            printf("\n\nDo you want an example?");
            printf("\n'Yes' or 'No':");
            scanf("%s",com);

            if(!strcmp(com,"Yes"))
                func_l2();
        }

        printf("\n\nDo you want to learn 'do' loop?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
        {
            strcpy(l,"\n\n3.3->DO LOOP\n\nC's final loop is 'do' loop.\n\nThe 'do' loop repeats the statement or statements while the expression is true. it stops when the expression becomes false. The 'do' loop is unique because it will always execute the code within the loop at least once, since the expression controlling the loop is tested at the bottom of the loop. If we see an example we will understand it properly. ");
            printf("%s",l);

            printf("\n\nDo you want an example?");
            printf("\n'Yes' or 'No':");
            scanf("%s",com);

            if(!strcmp(com,"Yes"))
                func_l3();
        }
    }

    else if(!strcmp(com,"Array"))
    {
        strcpy(a,"\n\n\n\t\t\t\t4.ARRAY\n\nIn this chapter you will learn about arrays. An array is essentially a list of related variables and can be very useful in a variety of situations. Since in C strings are simply arrays of characters, you will also learn about strings and several of C's strings and several of C's string functions.\n\nIn C, a one-dimensional array is a list of variables that are all of the same type and are accessed through a common name. An individual variable in the array is called an array element. Arrays form a convenient way to handle groups of related data. An array element is accessed by indexing the array using the number of the element. In C, all arrays begin at zero. This means that if you want to access the first element in an array, use zero for the index. To index an array, specify the index of the element you want inside square brackets.\n\nRemember, arrays start at zero, so an index of 1 references the second element. C stores one-dimensional arrays in one contiguous memory location with the first elements at the lowest address.\n\nC does not perform any bounds checking on array indexes. This means that it is possible to overrun the end of an array. For example, if an array called 'a' is declared as having five elements, the compiler will still let you access the(nonexistent) tenth element with a statement like a[9]. Of course, attempting to access nonexistent elements will generally have disastrous results, often causing the program to crash. it is up to you, the programmer, to make sure that the ends of arrays are never overrun. If we see an example we will understand it clearly. ");
        printf("%s",a);

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_a();
    }

    else if(!strcmp(com,"String"))
    {
        strcpy(s,"\n\n\n\t\t\t\t5.STRING\n\nThe most common use of the one-dimensional array in C is the string. Unlike most other computer languages, C has no built-in string data type.\n\nThere are several ways to read a string from the keyboard. The method we will use in this chapter employs another another of C's standard library functions: gets(). Like the other standard I/O functions, gets() also uses the STDIO.H header file. To use gets(), call it using the name of a character array without any index. The gets() function reads characters until you press 'enter'. The 'enter' key is not stored, but is replaced by a null, which terminates the string. For example, this program reads a string entered at the keyboard. It then displays the contents of that string one character at a time. ");
        printf("%s",s);

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_s();
    }

    else if(!strcmp(com,"Function"))
    {
        strcpy(f,"\n\n\n\t\t\t\t7.FUNCTION\n\nFunctions are building blocks of C. So far, the programs you have seen included only one function: main(). Most real world programs, however, will contain many functions. In this section you will begin to learn how to write programs that contain multiple functions.\n\nFor creating a function, a 'function prototype' is going to be needed. A 'function prototype' declares a function before it is used and prior to it's definition. A 'prototype' consists of a function name, it's return type and it's parameter list. It is terminated by a semicolon. The compiler needs to know this information in order for it to properly execute a call to the function.\n\nIf a function does not return a value, then it's return type should be 'void'. If a function does not use parameters, then it's parameter-list should contain the keyword 'void'.\n\nThe only function that does not need a prototype is 'main()' since it is predefined by the C language. When a function is called, execution transfers to that function. When the end of that function is reached, execution returns to a point immediately after the place at which the function was called.Put differently, when a function ends, execution resumes at the point in your program immediately following the call to the function. Any function inside a program may call any other function within the same program.  ");
        printf("%s",f);

        printf("\n\nDo you want an example?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_f1();

        printf("\n\nDo you want to see another example for 'void function'?");
        printf("\n'Yes' or 'No':");
        scanf("%s",com);

        if(!strcmp(com,"Yes"))
            func_f2();
    }
}


void func_i1()
{
    printf("\nExample 1:\n#include<stdio.h>\nmain()\n{\tint a;\n\ta=1+2;\n\tprintf(\"%%d\",a);\n} ");
}

void func_i2()
{
    printf("\n\nExample 2:\n#include<stdio.h>\nmain()\n{\tint num1,num2,sum;\n\tprintf(\"Enter the numbers:\");\n\tscanf(\"%%d %%d\",&num1,num2);\n\tsum=num1+num2;\n\tprintf(\"Sum:%%d\",sum);\n}");
}

void func_i3()
{
    printf(" \n\nExample:\n#include<stdio.h>\n\nmain()\n{\n\tchar ch;\n\n\tprintf(\"Enter a character:\");\n\tch=getchar();\n\tprintf(\"You typed:%c\",ch);\n\n\treturn 0;\n} ");
}

void func_c1()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tint num;\n\n\tprintf(\"Enter a number:\");\n\tscanf(\"%%d\",&num);\n\n\tif(num < 0) printf(\"Number is negative.\");\n\telse printf(\"Number is positive.\");\n\treturn 0;\n} ");
}

void func_c2()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tint num;\n\n\tprintf(\"Enter a number:\");\n\tscanf(\"%%d\",&num);\n\n\tif(num < 0) printf(\"Number is negative.\");\n\telse if printf(\"Number is positive.\");\n\telse printf(\"Sorry! Unrecognized number\");\n\treturn 0;\n} ");
}

void func_l1()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tint num;\n\n\tfor(num=1;num<11;num=num+1)\n\t\tprintf(\"%%d\",num);\n\n\treturn 0;\n} ");
}

void func_l2()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tchar ch;\n\n\tprintf(\"Enter a character:\");\n\tch=getche();\n\n\twhile(ch!='q') ch=getche;\n\n\tprintf(\"Found the q!\");\n\n\treturn 0;\n} ");
}

void func_l3()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tchar ch;\n\n\tdo\n\t{\n\t\tch=getche();\n\t}while(ch!='q');\n\n\tprintf(\'Found the q!\");\n\n\treturn 0;\n} ");
}

void func_a()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tint arr_input[10]={1,2,3,4,5,6,7,8,9,0};\n\tint Y,i,flag=0;\n\n\tprintf(\"Enter a value:\");\n\tscanf(\"%%d\",&Y);\n\n\tfor(i=0;i<10;i++)\n\t{\n\t\tif(Y==arr_input[i])\n\t\t{\n\t\tflag=1;\n\t\tbreak;\n\t\t}\n\t}\n\n\tif(flag==1) printf(\"Exist!\");\n\telse printf(\"Don't Exist!\");\n} ");
}

void func_s()
{
    printf("\nExample:\n#include<stdio.h>\nmain()\n{\n\tchar str[80];\n\tint i;\n\n\tprintf(\"Enter a string (less than 80 chars):\");\n\tgets(str);\n\tfor(i=0;str[i];i++) printf(\"%%c\",str[i]);\n\n\treturn 0;\n} ");
}

void func_f1()
{
    printf("\nExample 1:\n#include<stdio.h>\n\nsum(int a,int b);\n\nmain()\n{\n\tint a,b;\n\n\tprintf(\"Enter the numbers:\");\n\tscanf(\"%%d %%d\",&a,&b);\n\n\tprintf(\"Sum:%%d\",sum(a,b));\n}\n\nsum(int a,int b)\n{\n\tint s;\n\n\ts=a+b;\n} ");
}

void func_f2()
{
    printf("\n\nExample 2:\n#include<stdio.h>\n\nvoid func(void);\n\nmain()\n{\n\tprintf(\"I \");\n\tfunc();\n\tprintf(\"C.\");\n\n\treturn 0;\n}\n\nvoid func(void)\n{\n\tprintf(\"like\");\n} ");
}
