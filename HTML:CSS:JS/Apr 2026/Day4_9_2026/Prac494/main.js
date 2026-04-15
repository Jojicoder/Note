const numbers = [1,2,3,4,5];

const doubled = numbers.map(n => n*2);
console.log(doubled);

const squared = numbers.map(n=> n*n);
console.log(squared);

const users = [
    {name: "Alice", age: 25},
    {name: "Bob",  age: 30},
    {name: "Carol",age: 22},
];

const names = users.map(user => user.name);
console.log(names);

const withGreeting = users.map(user => ({
    ...user,
    greeting: `Hello, ${user.name}!`,
}));
console.log(withGreeting);

const evens = numbers.filter(n => n%2===0);
console.log(evens);

const odds = numbers.filter(n => n%2!==0);
console.log(odds);

const adults = users.filter(user => user.age >= 25);
console.log(adults);

const adultNames = users
    .filter(user => user.age >= 25)
    .map(user => user.name);

    console.log(adultNames);

const firstAdult = users.find(user => user.age >= 25);
console.log(firstAdult);

const fruits = ["apple", "banana", "cherry"];
console.log(fruits.includes("banana"));
console.log(fruits.includes("grape"));