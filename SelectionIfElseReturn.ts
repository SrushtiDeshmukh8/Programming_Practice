function DisplayClass(Age : number) : boolean
{
    if(Age >= 60)
    {
        return true
    }
    else
    {
        return false
    }
}

var MyAge1 : number = 34
var Result : boolean = false

Result = DisplayClass(MyAge1)
if(Result == true)
{
    console.log("You are senior citizen")
}
else
{
    console.log("You are not senior citizen")
}