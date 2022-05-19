//步驟1:右上角Java改p5.js
//步驟2:week13_5_dinner_ramdom程式轉檔
//https://pde2js.herokuapp.com/貼在左邊
//步驟三:把右邊程式碼，貼到Processing P5.js這個窗
//Run
function setup() {
    initializeFields();
    createCanvas(300, 300);
    fill(color(0x97, 0xC4, 0xFA));
    textSize(80);
    textAlign(CENTER, CENTER);
}

// -1沒有選，0,1,2有選
var choice;

function draw() {
    background(color(0xFF, 0xFA, 0xE8));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    var choice = mouseX % 3;
    // x,y,w,h
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
}

function mousePressed() {
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}


function setup() {
    initializeFields();
    createCanvas(300, 300);
    fill(color(0x97, 0xC4, 0xFA));
    textSize(80);
    textAlign(CENTER, CENTER);
}

// -1沒有選，0,1,2有選
var choice;

function draw() {
    background(color(0xFF, 0xFA, 0xE8));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    var choice = mouseX % 3;
    // x,y,w,h
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
}

function mousePressed() {
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
