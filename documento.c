/*
REGOLE
- Tutte le risposte devono essere scritte in JavaScript
- Se sei in difficoltÃ  puoi chiedere aiuto a un Teaching Assistant
- Puoi usare Google / StackOverflow ma solo quanto ritieni di aver bisogno di qualcosa che non Ã¨ stato spiegato a lezione
- Puoi testare il tuo codice in un file separato, o de-commentando un esercizio alla volta
- Per farlo puoi utilizzare il terminale Bash, quello di VSCode o quello del tuo sistema operativo (se utilizzi macOS o Linux)
*/

/* ESERCIZIO 1
 Elenca e descrivi i principali datatype in JavaScript. Prova a spiegarli come se volessi farli comprendere a un bambino.
*/

/* numeri, stringa, boolean, undefined, null, BigInt, Symbol
il numero è semplicemente una cifra compresa tra due numeri molto grandi, la stringa è un qualsiasi elemento scritto tra due "estremità" che vengono chiamate apici. Anche se è un numero, se è tra due apici, è comunque una stringa. Il boolean è rappresentato da due paroline, true o false. Undefined indica che in un contenitore è presente qualcosa, ma non sappiamo che cosa. Null, invece, indica un contenitore vuoto, quindi in quel contenitore non c'è ancora nulla. */

/* ESERCIZIO 2
 Descrivi cos'Ã¨ un oggetto in JavaScript, con parole tue.
*/

/* Un oggetto è un insieme di coppie chiave-valore, servono a descrivere un elemento secondo determinate caratteristiche. Sono connotazioni di caratteristiche specifiche di un elemento e lo descrivono.*/

/* ESERCIZIO 3
 Scrivi il codice necessario ad effettuare un addizione (una somma) dei numeri 12 e 20.
*/

/* let numero1 = 12
let numero2 = 20
let risultato

risultato = numero1 + numero2
console.log (risultato) */

/* ESERCIZIO 4
 Crea una variable di nome "x" e assegna ad essa il numero 12.
*/

/* let x = 12 */

/* ESERCIZIO 5
 Crea una variable chiamata "name" e assegna ad essa il tuo nome, sotto forma di stringa.
*/

/* let name = "Samantah" */

/* ESERCIZIO 6
 Esegui una sottrazione tra i numeri 4 e la variable "x" appena dichiarata (che contiene il numero 12).
*/

/* let numero = 4
let x = 12
let risultato

risultato = numero - x
console.log(risultato) */

/* ESERCIZIO 7
 Crea due variabili: "name1" e "name2". Assegna a name1 la stringa "john", e assegna a name2 la stringa "John" (con la J maiuscola!).
 Verifica che name1 sia diversa da name2 (suggerimento: Ã¨ la stessa cosa di verificare che la loro uguaglianza sia falsa).
 Infine, verifica che la loro uguaglianza diventi true se entrambe vengono trasformate in lowercase (senza cambiare il valore di name2!).
 NON HAI BISOGNO DI UN BLOCCO IF/ELSE. E' sufficiente utilizzare console.log().
*/


/* 
let name1
let name2
let verifica

name1 = "john"
name2 = "John"

verifica = name1 !== name2

console.log (verifica)
(per verificare la disuguaglianza)

let name1
let name2
let verifica

name1 = "john"
name2 = "John"

verifica = name1 != name2

(per verificare la seconda condizione)

console.log (verifica) */