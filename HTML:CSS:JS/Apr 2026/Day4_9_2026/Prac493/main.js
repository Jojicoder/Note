const titleEl = document.getElementById("title");
const descEl = document.getElementById("desc");
const changeTextBtn = document.getElementById("changeTextBtn");
const changeColorBtn = document.getElementById("changeColorBtn");
const toggleClassBtn = document.getElementById("toggleClassBtn");
const resetBtn = document.getElementById("resetBtn");
const cards = document.querySelectorAll(".card");

changeTextBtn.addEventListener("click", () => {
    titleEl.textContent = "Text has been changed!";
    descEl.textContent = "The text was updated by JavaScript.";
});

changeColorBtn.addEventListener("click", () =>{
    titleEl.style.color = "#ff9f43";
    titleEl.style.fontSize = "3rem";
    descEl.style.backgroundColor = "#fff3cd";
    descEl.style.padding        = "12px";
    descEl.style.borderRadius = "8px";
});

toggleClassBtn.addEventListener("click", () => {
    titleEl.classList.toggle("title--highlight");
})

resetBtn.addEventListener("click", ()=>{

    titleEl.textContent = "Hello World!";
    descEl.textContent = "This is the original text.";

    titleEl.style.color = "";
    titleEl.style.fontSize ="";
    descEl.style.backgroundColor = "";
    descEl.style.padding = "";
    descEl.style.borderRadius = "";

titleEl.classList.remove("title--highlight");

cards.forEach(card=> card.classList.remove("card--active"));
});

cards.forEach((card)=>{
    card.addEventListener("click", () => {
        card.classList.toggle("card--active");
    });
});