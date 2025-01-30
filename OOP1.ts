// We have to design an application which performs addition and substraction of 2 numbers

// Characteristics  - Data  (Te karanyakarata kay laganar ahe ?)
// Behaviours       - Functions (Tula kay karayecha ahe ?)

class Arithematic
{
    // Characteristics
    No1 : number
    No2 : number

    // Behaviours
    Addition() : number
    {
        var Ans : number = 0;
        Ans = this.No1 + this.No2
        return Ans
    }

    Substraction() : number
    {
        var Ans : number = 0;
        Ans = this.No1 - this.No2
        return Ans
    }
}

var obj = new Arithematic()
obj.No1 = 11
obj.No2 = 10

var Result : number = 0

Result = obj.Addition()
console.log("Addition is : "+Result)

Result = obj.Substraction()
console.log("Substraction is : "+Result)