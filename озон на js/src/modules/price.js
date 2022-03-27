import getData from "./getData";
import renderGoods from "./renderGoods";
import { priceFilter } from "./filters";


const price = () => {
    const minPrice = document.getElementById('min');
    const maxPrice = document.getElementById('max');
    const checkboxPromo = document.getElementById('discount-checkbox');
    const checkmark = document.querySelector('.filter-check_checkmark');

    minPrice.addEventListener('input', () => {
        getData().then(data => renderGoods(priceFilter(data, minPrice.value, maxPrice.value, checkboxPromo.checked)));
    })
    maxPrice.addEventListener('input', () => {
        getData().then(data => renderGoods(priceFilter(data, minPrice.value, maxPrice.value, checkboxPromo.checked))); 
    })

    checkboxPromo.addEventListener('change', () => {
        if (checkboxPromo.checked) checkmark.classList.add('checked');
        else checkmark.classList.remove('checked');
        getData().then(data => renderGoods(priceFilter(data, minPrice.value, maxPrice.value, checkboxPromo.checked)));
    })
 
}

export default price;