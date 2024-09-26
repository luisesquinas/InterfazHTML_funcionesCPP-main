document.getElementById('botonIniciar').onclick = async function (e) {
    response = await fetch(`/cgi-bin/saluda.cgi`);
    data = await response.text();
    document.getElementById('resultado').innerText = `${data}`;
};
