// Vowel and consonent by if_else using Logical Or operator

package java_Tutorial;

import java.util.Scanner;

public class T20 {
    public static void main(String[] args){
   
        Scanner input = new Scanner(System.in);
    
        char ch;
    
        System.out.print("Input Char = "); 
        ch = input.next().charAt(0);
        
        if(ch=='a'){
            System.out.println("a is a vowel");
        }
        else if(ch=='e'){
            System.out.println("e is a vowel");
        }
        else if(ch=='i'){
            System.out.println("i is a vowel");
        }
        else if(ch=='o'){
            System.out.println("o is a vowel");
        }
        else if(ch=='u'){
            System.out.println("u is a vowel");
        }
        else
        {
            System.out.println("is a consonent");
        }
    }
}
