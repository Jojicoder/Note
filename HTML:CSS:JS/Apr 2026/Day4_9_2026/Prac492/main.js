const score = 75;

if(score >= 90){
    console.log("Grade: A");
}else if (score >= 70){
    console.log("Grade: B");
}else if (score >= 50){
    console.log("Grade: C");
}else{
    console.log("Grade: F");
}

console.log(10 > 5);
console.log(10 < 5);
console.log(10 >= 10);
console.log(10 <= 9);
console.log(10 === 10);
console.log(10 !== 5);

const age = 20;
const status = age >= 18 ? "Adult" : "Minor";
console.log(status);

const isLoggedIn = true;
const isAdmin   = false;

if(isLoggedIn && isAdmin){
    console.log("Welcome, Admin!");
}else{
    console.log("Access denied.");
}

if(isLoggedIn || isAdmin){
    console.log("At least one is true.");
}

console.log(!isLoggedIn);
console.log(!isAdmin);

const day = "Monday";

switch(day){
    case "Saturday":
    case "Sunday":
        console.log("Weekend!");
        break;
    case "Monday":
        console.log("Start of the week.");
        break;
    default:
        console.log("Weekday.")
}