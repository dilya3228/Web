const counter = () => {
    const cartCounter = document.querySelector('.counter');
    const cart = localStorage.getItem('cart') ? JSON.parse(localStorage.getItem('cart')) : [];
    console.log(cart.length);

    cartCounter.textContent = cart.length;
}

export default counter;