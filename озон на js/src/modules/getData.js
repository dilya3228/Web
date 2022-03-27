const getData = () => {
    return fetch(
        'https://test-cb307-default-rtdb.firebaseio.com/goods.json'
    )
    .then(response => response.json())
    
}

export default getData