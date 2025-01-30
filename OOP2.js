var Demo = /** @class */ (function () {
    function Demo() {
        console.log("Inside constructor of Demo class");
    }
    Demo.prototype.fun = function () {
        console.log("Inside fun of Demo class");
    };
    return Demo;
}());
var obj1 = new Demo();
var obj2 = new Demo();
