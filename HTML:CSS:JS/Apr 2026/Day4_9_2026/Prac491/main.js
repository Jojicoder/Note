const textInput  = document.getElementById("textInput");
const addBtn = document.getElementById("addBtn");
const list = document.getElementById("list");
const clearBtn = document.getElementById("clearBtn");

function createItem(text){
    const li = document.createElement("li");
    li.className = "list__item";

    const span = document.createElement("span");
    span.textContent = text;

    const deleteBtn = document.createElement("button");
    deleteBtn.textContent = "Delete";
    deleteBtn.className = "btn btn--delete";

    deleteBtn.addEventListener("click", () =>{
        li.remove();
    });

    li.appendChild(span);
    li.appendChild(deleteBtn);

    return li;
}


addBtn.addEventListener("click", () => {
    const text = textInput.value.trim();
    if(text === "") return;
    const newItem = createItem(text);
    list.appendChild(newItem);

    textInput.value ="";
});

textInput.addEventListener("keydown", (e)=> {
    if(e.key === "Enter"){
        addBtn.click();
    }
});

clearBtn.addEventListener("click", () =>{
    list.innerHTML = "";
});

document.querySelector(".btn--delete").addEventListener("click", function(){
    this.closest(".list__item").remove();
})