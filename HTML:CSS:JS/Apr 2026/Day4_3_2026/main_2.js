
function greet(){
    console.log("Hello, World!");
}

greet();

function greetUser(name){
    console.log("Hello, "+ name +"!");
}

greetUser("Alice");
greetUser("Bob");

function add(a,b){
    return a+b;
}

const result = add(3,4);
console.log(result);

const multiply = (a,b)=>{
    return a*b;
}

const square = n => n*n;

console.log(multiply(3,4));
console.log(square(5));

const greetDefault = (name = "Guest") => {
    console.log("Welcome, " +name +"!");
};

greetDefault("Alice");
greetDefault();