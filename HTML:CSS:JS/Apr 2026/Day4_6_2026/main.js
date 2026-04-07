const questions = [
{
    question: "Which tag is used for a paragraph?",
    answers: ["<div>","<p>","<span>","<h1>"],
    correct: 1,
},{
    question: "Which property changes text color in CSS?",
    answers: ["background-color", "font-size","color","opacity"],
    correct: 2,
},
{
    question: "How do you declare a variable in modern JavaScript?",
    answers:["var","let","const","let or const"],
    correct: 3,
},];

const questionEl = document.getElementById("question");
const progressEl = document.getElementById("progress");
const feedbackEl = document.getElementById("feedback");
const nextBtn    = document.getElementById("nextBtn");
const resultEl   = document.getElementById("result");
const scoreEl    = document.getElementById("score");
const retryBtn   = document.getElementById("retryBtn");
const answerBtns = [
    document.getElementById("btn0"),
    document.getElementById("btn1"),
    document.getElementById("btn2"),
    document.getElementById("btn3"),
];

let currentIndex = 0;
let score = 0;
let answered = false;

function loadQuestion(){
    const current = questions[currentIndex];

    answered = false;
    feedbackEl.textContent = "";
    feedbackEl.style.color = "";

    progressEl.textContent =
        `Question ${currentIndex + 1} / ${questions.length}`;
    
    questionEl.textContent = current.question;

    answerBtns.forEach((btn, index) => {
        btn.textContent = current.answers[index];
        btn.className = "answer-btn";
        btn.disabled = false;
    }); 
}

function checkAnswer(selectedIndex){
    if(answered) return;
    answered = true;

    const correct = questions[currentIndex].correct;

    answerBtns.forEach((btn, index) => {
        btn.disabled = true;

        if(index === correct){
            btn.classList.add("answer-btn--correct");
        }

        if(index === selectedIndex && selectedIndex !== correct){
            btn.classList.add("answer-btn--wrong");
        }
    });

    if(selectedIndex === correct){
        score++;
        feedbackEl.textContent = "Correct!";
        feedbackEl.style.color = "#28a745";
    }else{
        feedbackEl.textContent = "Wrong!";
        feedbackEl.style.color = "#dc3545";
    }
}

function showResult(){
    document.querySelector(".card").style.display = "none";
    document.querySelector(".header").style.display = "none";
    resultEl.style.display = "block";
    scoreEl.textContent = `Your score: ${score} / ${questions.length}`;
}

function resetQuiz() {
    currentIndex = 0;
    score = 0;
    answered = false;

    document.querySelector(".card").style.display = "block";
    document.querySelector(".header").style.display = "block";
    resultEl.style.display = "none";

    loadQuestion();
}

answerBtns.forEach((btn, index) => {
    btn.addEventListener("click", () => checkAnswer(index));
});

nextBtn.addEventListener("click", () =>{
    if (!answered) return;

    currentIndex++;
    if(currentIndex < questions.length){
        loadQuestion();
    }else{
        showResult();
    }
});

retryBtn.addEventListener("click", resetQuiz);

loadQuestion();