function DisplayTimetable(Batch : string) : void
{
    switch(Batch)
    {
        case "PPA":
        {
            console.log("Batch timing : 1 PM")
            break
        }
        case "Angular":
        {
            console.log("Batch timing : 4 PM")
            break
        }
        case "LB":
        {
            console.log("Batch timing : 7.30 PM")
            break
        }
        default:
        {
            console.log("There is no such batch")
            break
        }
    }
}