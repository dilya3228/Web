const cart = () => {
    const catrBtn = document.getElementById('cart')
    const cartModal = document.querySelector('.cart')
    const cartCloseBtn = cartModal.querySelector('.cart-close')

    const openCart = () => {
        cartModal.style.display = 'flex'
    }

    const closeCart = () => {
        cartModal.style.display = ''
    }

    catrBtn.addEventListener('click', openCart)
    cartCloseBtn.addEventListener('click', closeCart)
}

cart()