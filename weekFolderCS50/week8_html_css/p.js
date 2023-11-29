function greet(){
    let name = document.querySelector('#name').value;
    alert(`hello ${name}`);
}
document.querySelector('form').addEventListener('submit', function(e)){
    greet();
    e.preventDefault();
}
