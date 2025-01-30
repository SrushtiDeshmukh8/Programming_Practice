
var Data1 : number[] = new Array(4)
Data1 = [11,21,51,101]

var Cnt : number = 0

for(Cnt = 0; Cnt < Data1.length; Cnt++)
{
    console.log(Data1[Cnt])
}

var Sum : number = 0

for(Cnt = 0; Cnt < Data1.length; Cnt++)
{
    Sum = Sum + Data1[Cnt]
}

console.log("Summation of all elements is : "+Sum)