
function DisplayClass(Age : number) : void
{
    if(Age >= 60)
    {
        console.log("You are senior citizen")
    }
    else
    {
        console.log("You are not a senior citizen")
    }
}

var MyAge1 : number = 34
DisplayClass(MyAge1)

var MyAge2 : number = 67
DisplayClass(MyAge2)