const gameSlide = () => {
    const burger = document.querySelector(".burger");
    const nav = document.querySelector(".nav-links");
    const navLinks = document.querySelectorAll(".nav-links li");
    //Toggle Nav

    burger.addEventListener("click", () => {
        //tpggçe Mav
        nav.classList.toggle("nav-active");

        //Animate links
        navLinks.forEach((link, index) => {
            if(link.style.animation) {
                link.style.animation = "";
            } else {
                link.style.animation = `navLinkFade 0.5s ease forwards ${index / 7 + 0}s`;
            }
        });
        //burger animation      
        burger.classList.toggle("toggle");
    });
}
gameSlide();

