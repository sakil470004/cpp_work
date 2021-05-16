var x = document.querySelector("#Contries").value;
document.querySelector("#Contries").addEventListener("change",function(){

var selectedNumber = this.value
if(selectedNumber==1){
document.querySelector("#selected-Number").innerHTML = "<select>
<option>Dhaka</option><option>Dinajpur</option><option>Noakhali</option></select>";
}
else if(selectedNumber==2){
document.querySelector("#selected-Number").innerHTML = "You selected USA";
}
else if(selectedNumber==3){
document.querySelector("#selected-Number").innerHTML = "You selected INDIA";

}
else(){
}
});
