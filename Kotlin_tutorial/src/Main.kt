//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner

fun main() {
    val name = "Kotlin"
    val age = 24
    //TIP Press <shortcut actionId="ShowIntentionActions"/> with your caret at the highlighted text
    // to see how IntelliJ IDEA suggests fixing it.
    println("Hello, " + name + "!")
    println("You are $age years old")

    //Get input from the user
    print("Enter text here: ")
    val userText = readLine()!!
    println("You entered: '$userText'")

    //Get integer input from the user
    val reader = Scanner(System.`in`)
    print("Enter a number here: ")
    var integer1 = reader.nextInt()
    println("You entered: $integer1")

    //If...Else
    print("Enter another number here: ")
    val ranNumber = reader.nextInt()

    val result = if (ranNumber > 0) {
        "You entered a Positive Number"
    } else {
        "You entered a Negative Number"
    }
    println(result)

    var i = 1

    while (i <= 10) {
        println("Line $i")
        i++
    }

    var text = "Kotlin"
    for (letter in text) {
        println(letter)
    }

    //This is a comment

    /*
    * And so is this
    */

    for (n in 1..5) {
        //TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint
        // for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
        println("n = $n")
    }
}