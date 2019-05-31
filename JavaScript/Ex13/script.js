function verificar() {
    var data = new Date();
    var ano = data.getFullYear();
    var fano = document.getElementById("txtano");
    var res = document.querySelector("div#res");

    if(fano.value.length == 0 || fano.value > ano) {
        window.alert("[ERRO] Verifique os dados e tente novamente");
    } else {
        var fsex = document.getElementsByName("radsex");
        var idade = ano - Number(fano.value);
        var gênero = "";
        var img = document.createElement("img");
        img.setAttribute("id", "foto");
        if(fsex[0].checked) {
            gênero = "Homem";
            if(idade >= 0 && idade <10) {
                img.setAttribute("src", "homembb.png");
            } else if(idade < 21) {
                img.setAttribute("src", "homemjovem.png");
            } else if(idade < 50) {
                img.setAttribute("src", "homemadulto.png");
            } else {
                img.setAttribute("src", "homemidoso.png");
            }
        } else if(fsex[1].checked) {
            gênero = "Mulher";
            if (idade >= 0 && idade < 10) {
                img.setAttribute("src", "mulherbb.png");
            } else if (idade < 21) {
                img.setAttribute("src", "mulherjovem.png");
            } else if (idade < 50) {
                img.setAttribute("src", "mulheradulta.png");
            } else {
                img.setAttribute("src", "mulheridosa.png");
            }
        }
        res.style.textAlign = "center"; //centralizando item
        res.innerHTML = `Você é ${gênero} com ${idade} anos.`
        res.appendChild(img);
    }
}