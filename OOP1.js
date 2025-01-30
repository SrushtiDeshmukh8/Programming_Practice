// We have to design an application which performs addition and substraction of 2 numbers
// Characteristics  - Data  (Te karanyakarata kay laganar ahe ?)
// Behaviours       - Functions (Tula kay karayecha ahe ?)
var Arithematic = /** @class */ (function () {
    function Arithematic() {
    }
    // Behaviours
    Arithematic.prototype.Addition = function () {
        var Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    };
    Arithematic.prototype.Substraction = function () {
        var Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    };
    return Arithematic;
}());
var obj = new Arithematic();
obj.No1 = 11;
obj.No2 = 10;
var Result = 0;
Result = obj.Addition();
console.log("Addition is : " + Result);
Result = obj.Substraction();
console.log("Substraction is : " + Result);
