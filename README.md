# Algorithmics

This is an assigment for the Algorithmics course from bachelor in informatics engineering. Coused in Barcelona school of informatics in polytechnic university of Catalonia (FIB - UPC).

## Information

Under the file `DocSim.pdf` there is all asked for this assigment and we did the final delivery in the `Documentació A.pdf`.

## Usage

To be able to run the code and test everything explained in the final deliver, you should execute the commands below.

### Create the test cases

To crease 20 permutation of text as test cases. The name of the test files created will be `test_i.txt` where i will go from 0 to 19.

```bash
cd Practica/test
chmod 755 generador_JJPP.sh
./generador_JJPP.sh
```

## Run the doc_similarity code

To be able to run the document similarity code:

```bash
cd Practica/execucio
chmod 755 open.sh
./open.sh
```
The result comparison will be stored under the file `results.csv`.
