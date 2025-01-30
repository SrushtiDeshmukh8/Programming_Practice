class Demo
{
    No : number
    str : string

    constructor(x : number, name : string)
    {
        console.log("Inside parametrised constructor")
        this.No = x
        this.str = name
    }

    fun() : void
    {
        console.log("Inside fun of Demo class")
        console.log("Value of No is : "+this.No)
        console.log("Value of str is : "+this.str)
    }
}

var obj1 = new Demo(11,"PPA")
var obj2 = new Demo(21,"LB")

obj1.fun()
obj2.fun()
