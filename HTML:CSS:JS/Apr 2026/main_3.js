const contactBtn = document.getElementById("contactBtn");
const message    = document.getElementById("message");


contactBtn.addEventListener("click", () => {

    message.textContent = "Thanks for reaching out! I will get back to you soon.";

    contactBtn.textContent = "Message Sent!";

    contactBtn.disabled = true;
    contactBtn.style.backgroundColor = "#aaaaaa";
});