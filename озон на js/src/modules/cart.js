import renderCart from "./renderCart";
import postData from "./postData";
import counter from "./counter";

const cart = () => {
    const cartBtn = document.getElementById('cart');
    const cartModal = document.querySelector('.cart');
    const cartCloseBtn = cartModal.querySelector('.cart-close');
    const cartTotal = cartModal.querySelector('.cart-total span');
    const goodsWrapper = document.querySelector('.goods');
    const cartWrapper = document.querySelector('.cart-wrapper');
    const cartSendBtn = cartModal.querySelector('.cart-confirm');
   
    const openCart = () => {
        const cart = localStorage.getItem('cart') ? JSON.parse(localStorage.getItem('cart')) : []; 
        cartModal.style.display = 'flex';
        renderCart(cart);     
        cartTotal.textContent = cart.reduce((sum, goodItem) => {
            return sum + goodItem.price;
        }, 0); 
    }
    const closeCart = () => {
        cartModal.style.display = '';
    }

    cartBtn.addEventListener('click', openCart);
    cartCloseBtn.addEventListener('click', closeCart);
    goodsWrapper.addEventListener('click', (event) => { // событие щелчка добавляем на весь контейнер с товарами, а не на каждую кнопку (делегирвоание)
        if (event.target.classList.contains('btn-primary')) { // проверяем, что щелкнули именно по кнопке
            const card = event.target.closest('.card'); // переходим к карточке, на к-ой эта кнопка находится
            const key = card.dataset.key; // получаем id товара (=карточки)
            const goods = JSON.parse(localStorage.getItem('goods')); // получаем массив из localStorage (в виде строки) и преобразуем его в массив
            const cart = localStorage.getItem('cart') ? JSON.parse(localStorage.getItem('cart')) : []; // создаем массив для корзины (cart). Одновр. проверяем, нет ли уже такого массива в localStorage. Если есть, берем его, если нет, создаем пустой
            const goodItem = goods.find((item) => { //перебираем массив с товарами и ищем тот (item), у к-ого id совпадет с id карточки на странице, по к-ой щелкнули. Т.е. это тот тоар, к-ый надо добавить в корзину. Метод find() ищет в массиве элемент с заданным значением и возвращает первый из найденных.
                return item.id === +key; //По ходу преобразуем значение переменной key в число, т.к. в ней была строка. Найденный элемент сохраняем в goodItem
            });

            cart.push(goodItem); //добавляем выбранный товар в корзину (массив cart)
            localStorage.setItem('cart', JSON.stringify(cart)); // и (пере)записываем его в localStorage

            counter();
        }
    });

    cartWrapper.addEventListener('click', (event) => {
        if (event.target.classList.contains('btn-primary')) {
            const cart = localStorage.getItem('cart') ? JSON.parse(localStorage.getItem('cart')) : [];
            const card = event.target.closest('.card');
            const key = card.dataset.key;
            //удаление из массива
            const index = cart.findIndex((item) => {
                return item.id === +key;
            })
            cart.splice(index, 1);           

            localStorage.setItem('cart', JSON.stringify(cart));
            renderCart(cart);      // вызов ф-ции, которая отображает список товаров в корзине
            cartTotal.textContent = cart.reduce((sum, goodItem) => { 
                return sum + goodItem.price;
            }, 0);
            counter(); 
        }
    });

    cartSendBtn.addEventListener('click', () => {
        const cart = localStorage.getItem('cart') ? JSON.parse(localStorage.getItem('cart')) : [];
        postData(cart).then(() => {
            localStorage.removeItem('cart'); 
            renderCart([]); 
            cartTotal.textContent = 0;
            counter(); 
        });
        
    });
}

export default cart;