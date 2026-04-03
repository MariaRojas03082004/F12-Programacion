#!/bin/bash
# Autograder simple para validación local
EJECUTABLE=$1
ARCHIVO_CPP=$2

if [ ! -f "$EJECUTABLE" ]; then
    echo "Error: El ejecutable '$EJECUTABLE' no existe. Compila primero."
    exit 1
fi

echo "--- Iniciando Autograder para $ARCHIVO_CPP ---"
echo "Ejecutable detectado correctamente. Listo para pruebas manuales."