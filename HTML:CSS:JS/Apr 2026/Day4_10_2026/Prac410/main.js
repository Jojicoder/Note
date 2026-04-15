const  cardsEl = document.getElementById("cards");
const  loadingEl = document.getElementById("loading");
const errorEl = document.getElementById("error");

async function fetchUsers(){
    try{
        loadingEl.textContent = "Loading...";

        const response = await fetch(
            "https://jsonplaceholder.typicode.com/users"
        );

        const users = await response.json();

        loadingEl.textContent = "";

        users.forEach(user => {
            const card = document.createElement("div");
            card.className = "card";

            card.innerHTML = `
                <p class="card__name">${user.name}</p>
                <p class="card__email">${user.email}</p>
                <p class="card__company">${user.company.name}</p>
            `;

            cardsEl.appendChild(card);
        });
    }catch(error){
        loadingEl.textContent="";
        errorEl.textContent ="Failed to load users.";
        console.error(error);
    }
}

fetchUsers();