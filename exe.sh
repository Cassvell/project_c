#!/bin/bash

read -p "para ejecutar, escribe primero el nombre del archivo (name): " script
extension='.cpp'

read -p "escriba el nombre del folder sobre el cual se guardara: " folder

dirname=/home/c-isaac/projectos_C/$folder
if [ -d "$dirname" ];
then
	echo 'directorio existente\n\n'
else
	mkdir /home/c-isaac/projectos_C/$folder
fi

filename=/home/c-isaac/projectos_C/$folder/$script$extension

if [ -f "$filename" ]; 
then 
	echo 'existe archivo previo para editar\n\n'
	mv /home/c-isaac/projectos_C/$folder/$script$extension /home/c-isaac/projectos_C 
	gedit $script$extension
else
	echo 'no hay un archivo previo, genere uno nuevo\n\n'	
	gedit $script$extension
fi 

mv /home/c-isaac/projectos_C/$script$extension /home/c-isaac/projectos_C/$folder/

g++ -o res_"$script" /home/c-isaac/projectos_C/$folder/$script$extension
chmod +x ./res_"$script"

./res_"$script"

filename=res_"$script"

mv $filename /home/c-isaac/projectos_C/$folder
