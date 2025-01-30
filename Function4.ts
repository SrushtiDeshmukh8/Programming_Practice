
        function Addition(Value1 : number , Value2 : number) : number
        {
            console.log("Inside addition function")
            var Ans : number = 0 // Local variables
            Ans = Value1 + Value2
            return Ans
        }

        console.log("Start of application")
        var Result : number = 0
        Result = Addition(10,11)
        console.log("Addition is : "+Result)
        console.log("End of application")
