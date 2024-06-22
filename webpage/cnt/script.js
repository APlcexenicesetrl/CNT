class ui{
    constructor(){
        this.debug = {
            log: "[Log]: Start Program",
            login(info){
                var texts = this.log;
                texts = `${texts}\n[Log]: ${info}`;
                this.log = texts;
            }
        };
        this.dos = {
            input_code(){ return document.getElementById('input-code-text') }
        }
    }
    send(){
        var input_text = this.dos.input_code().value;
        this.debug.login(`Code Input > '${input_text}'`);
        this.dos.input_code().value = "";
    }
    
}
ui = new ui;