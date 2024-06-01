class program{
    constructor(){
        
    }
    link(link){
        let _link_ = document.createElement('a');
        _link_.setAttribute('href',link)
        _link_.click();
    }
}

program = new program();