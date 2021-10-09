// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Símbolos, alfabetos y cadenas
// Autor: Edgar Joel Martín Melián
// Correo: alu0101434698@ull.edu.es
// Fecha: 06/10/2021
// Archivo cya-P02-Strings.cc: programa cliente.
//          Contiene la función main del proyecto que usa las clases X e Y
//          que realizan el trabajo de leer el fichero de entrada
//          identificando patrones en el texto que dan lugar
//          al fichero de salida.
// Referencias:
//          Enlaces de interés
// Historial de revisiones
//          06/10/2021 - Creación (primera versión) del código
//   


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> /// exit
#include "tools.h"
#include "cadena.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
    if (argc != 4) {
        std::string parameter{argv[1]};
        if (parameter == "--help") {
            std::cout << kHelpText << std::endl;
            exit(EXIT_SUCCESS);
        }
        std::cout << argv[0] << " -- Símbolos, Alfabetos y Cadenas \n\
        Modo de uso: " << argv[0] << " fichero_entrada fichero_salida opcode \n\
        Pruebe " << argv[0] << " --help para más información" << std::endl;
        exit(EXIT_SUCCESS);
    }
}

/** Funcionamiento principal del programa con los archivos
 *
 *  @param[in] kInputFileName   Archivo Prinicipal del cual se va a leer la información
 *  @param[in] kOutputFileName  Archivo en el cual se guardará los resultados de los operandos
 *  @param[in] kOpcode          Numero identificador de la operación a realizar
 */
void Function(const std::string kInputFileName, const std::string kOutputFileName, const int kOpcode){
    std::ifstream input_file {"./" + kInputFileName};
    if (!input_file) {
        std::cerr << "Error de Archivo: " << kInputFileName << " no se puede abrir." << std::endl;
        exit(EXIT_SUCCESS);
    }

    std::ofstream output_file {"./" + kOutputFileName};
    if (!output_file) {
        std::cerr << "Error de Archivo: " << kOutputFileName << " no se puede abrir." << std::endl;
        exit(EXIT_SUCCESS);
    }


    std::string string;
    while(input_file) {
        getline(input_file,string);
        Cadena chain{string};

        switch (kOpcode){
            case 1:
                output_file << chain.Longitud() << std::endl;
                break;
            case 2:
                output_file << chain.Inversa() << std::endl;
                break;
            case 3:
                output_file << chain.Prefijos() << std::endl;
                break;
            case 4:
                
                break;
            case 5:
                output_file << chain.Subcadenas() << std::endl;
                break;
            default:
                break;
        }
        
    }

    input_file.close();
    output_file.close();
}
