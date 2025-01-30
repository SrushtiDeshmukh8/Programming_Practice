// Lambda Statement

var TEMP = (No1 : number, No2 : number) =>
{
    console.log("Inside Addition Lambda statement")
    var Result : number = 0
    Result = No1 + No2
    return Result
}

var Ans : number = 0

Ans = TEMP(10,11)

console.log("Addition is : "+Ans)

console.log(typeof(TEMP))   // function
