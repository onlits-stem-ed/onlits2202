Module EvenOdd
    Sub Main()
        Dim n as Integer
        Console.Write("Enter a number: ")
        n = Console.ReadLine()
        If n mod 2 = 0 Then
            Console.WriteLine("Even Number")
        Else
            Console.WriteLine("Odd Number")
        End If
    End Sub
End Module