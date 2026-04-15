const cardsEl = document.getElementById("cards");
const loadingEl = document.getElementById("loading");
const errorEl = document.getElementById("error");
const inputEl = document.getElementById("searchInput");
const btnEl =   document.getElementById("searchBtn");

async function fetchUser(id){
    try{
        loadingEl.textContent = "Loading...";
        errorEl.textContent   = "";
        cardsEl.innerHTML     = "";

        const response = await fetch(
            `https://jsonplaceholder.typicode.com/users/${id}`
        )

        if(!response.ok){
            throw new Error(`User not found. Status: ${response.status}`);
        };

        const user = await response.json();

        loadingEl.textContent = "";

        cardsEl.innerHTML = `
        <div class = "card">
            <p class = "card__name">${user.name}</p>
            <p class = "card__email">${user.email}</p>
            <p class = "card__phone">${user.phone}</p>
            <p class = "card__company">${user.company.name}</p>
            <p class = "card__city">${user.address.city}</p>
        </div>    
        `
    } catch (error){
        loadingEl.textContent = "";
        errorEl.textContent = error.message;
        console.error(error);
    }
}

async function fetchAllUsers(){
        try{
            loadingEl.textContent = "Loading...";
            errorEl.textContent   = "";
            cardsEl.innerHTML     = "";

            const response = await fetch(
                "https://jsonplaceholder.typicode.com/users"
            );

            if(!response.ok){
                throw new Error(`Failed to load. Status: ${response.status}`);
            }

            const users = await response.json();

            loadingEl.textContent = "";

            users.forEach(user => {
                cardsEl.innerHTML += `
                    <div class="card">
                        <p class="card__name">${user.name}</p>
                        <p class="card__email">${user.email}</p>
                        <p class="card__company">${user.company.name}</p>
                    </div>
                `;
            });
        } catch(error){
            loadingEl.textContent = "";
            errorEl.textContent = error.message;
        }
    }
    
    btnEl.addEventListener("click", () => {
            const id = inputEl.value.trim();

            if(id===""){
                fetchAllUsers();
                return;
            }

            const num = parseInt(id);
            if(isNaN(num)|| num < 1 || num>10){
                errorEl.textContent = "Please enter a number between 1 and 10.";
                return;
            }
            fetchUser(num);
        });

        fetchAllUsers();
