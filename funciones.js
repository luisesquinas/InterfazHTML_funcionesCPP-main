// Lógica para el botón "Iniciar"
document.getElementById('botonIniciar').onclick = async function (e) {
    const response = await fetch(`/cgi-bin/saluda.cgi?accion=iniciar`);
    const data = await response.text();
    document.getElementById('resultado').innerText = data; // Muestra el resultado en el div
};

// Lógica para el nuevo botón
document.getElementById('nuevoBoton').onclick = async function (e) {
    const response = await fetch(`/cgi-bin/saluda.cgi?accion=nuevaFuncion`);
    const data = await response.text();
    document.getElementById('resultado').innerText = data; // Muestra el resultado en el div
};



