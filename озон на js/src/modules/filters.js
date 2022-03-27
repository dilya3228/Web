export const searchFilter = (goods, value) => {
    return goods.filter((goodsItem) => {
        return goodsItem.title.toLowerCase().includes(value.toLowerCase());
    })
}

export const categoryFilter = (goods, value) => {
    return goods.filter((goodsItem) => {
        return goodsItem.category === value;
    })
}


export const priceFilter = (goods, minValue, maxValue, checked) => {
  
    return goods.filter((goodsItem) => {
        if (!checked) {
            if ((minValue === '') && (maxValue === '')) return goodsItem;
            else if ((minValue !== '') && (maxValue !== '')) return goodsItem.price >= Number(minValue) && goodsItem.price <= Number(maxValue);
            else if ((minValue !== '') && (maxValue === '')) return goodsItem.price >= Number(minValue);
            else if ((minValue === '') && (maxValue !== '')) return goodsItem.price <= Number(maxValue);
        }
        else {
            if ((minValue === '') && (maxValue === '')) return goodsItem.sale===true;
            else if ((minValue !== '') && (maxValue !== '')) return goodsItem.price >= Number(minValue) && goodsItem.price <= Number(maxValue) && goodsItem.sale===true;
            else if ((minValue !== '') && (maxValue === '')) return goodsItem.price >= Number(minValue) && goodsItem.sale===true;
            else if ((minValue === '') && (maxValue !== '')) return goodsItem.price <= Number(maxValue) && goodsItem.sale===true;
        }
    })
}