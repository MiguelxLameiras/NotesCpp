auto i = 1;

void function(int* i){
    *(i++);

}

int main(){

    function(&i);
}