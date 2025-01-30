
function CircleArea(Rad : number, PI?:number) : number
{
    var Area : number = 0;

    if(PI == undefined)
    {
        PI = 3.14
    }

    Area = PI * Rad * Rad
    return Area
}

console.log(CircleArea(5.10,3.14))
console.log(CircleArea(5.10))

