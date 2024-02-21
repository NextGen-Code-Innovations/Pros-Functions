void PNU_FN(){ 
    static int pnuOn = 0;
    for (;;) {
        if(controller_get_digital_new_press(CONTROLLER_MASTER, button)) // replace button with correct var
            pnuOn = !pnuOn;
        if(pnuOn){
            adi_digital_write(pnu_port, HIGH);  // out
        } else {
            adi_digital_write(pnu_port, LOW);   //in
        }
        task_delay(2);
    }
} 