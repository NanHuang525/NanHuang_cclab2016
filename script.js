

var itemInput = document.getElementById("new-item");
var addButton = document.getElementsByTagName("button")[0];
var toGet = document.getElementById("to-get");
var deleteButton;


//create new list item
var createNewItemElement = function(a){

	var listItem = document.createElement("li");
	var label = document.createElement("label");
	deleteButton = document.createElement("button");


	deleteButton.innerText = "delete";
	deleteButton.className = "delete";

	label.innerText = a;
	
// if the value of the field itemInput is NOT nothing, ONLY THEN create a label, delete button and add it.
if (itemInput.value != "") {
	listItem.appendChild(deleteButton);
	listItem.appendChild(label);
	return listItem;

}
	
}

//add a new item
var addItem = function(){
	var listItem = createNewItemElement(itemInput.value);

		toGet.appendChild(listItem);
		bindItemEvents(listItem);	
	    itemInput.value = "";
}


//delete an existing item
var deleteItem = function(){
	console.log("deleting!")
	var listItem = this.parentNode;
	var ul = listItem.parentNode;

	ul.removeChild(listItem);
}


var bindItemEvents = function(ListItem){
	deleteButton.addEventListener("click", deleteItem);

}

addButton.addEventListener("click", addItem);

