// Just A Simple Program to Check Entered Number is Even or Odd

package main

import "fmt"

func main(){
    fmt.Print("Enter number : ")
    var n int
    fmt.Scanln(&n)
    /*  Conditional Statement if .... else ........     */
    if(n%2==0){
        fmt.Println(n,"is Even number")
    }else{
        fmt.Println(n,"is Odd number")
    }
}