//
// Created by Kai Siemek on 19.05.20.
//

#include "UIOutput.h"
#include "UIDisplayArray.h"
#include "UIInternalState.h"
#include "LogicDummyMethodsForUI.h"

/**
 * Aus Discord:
 * "[...] ich glaube die Methode war dazu gedacht, die verschiedenen
 * convert-Methoden, die die Logik anbietet zu sortieren und immer das
 * richtige aufzurufen. Das gewünschte Zahlensystem kann man dann im
 * SharedState finden (z.B. wenn wir im Signed Hexadecimal sind, müsst
 * ihr dann innerhalb der convertNumber Methode entscheiden, dass ihr
 * dann auch die Hexadezimale Repräsentation ausgebt)."
 *
 * Aus Google-Doc "Notizen":
 * "Die Hardware -Gruppe kann nach einem speziellen Pfeil gefragt
 * werden, der bei einer zu langen Zahl signalisiert, dass die Zahl
 * an der Stelle “noch weiter geht”"
 *
 * @param number to convert into string
 * @return string of the representation of <code>number</code> in the desired number system
 */
char* UIOutput::convertNumber(long long number) {
    char* ret;
    InternalState internalState;
    LogicDummyMethodsForUI logicDummyMethods;

    switch(internalState.numberSystem) {
    case NUMBER_SYSTEM_BINARY:
        ret = logicDummyMethods.numberToBinaryString(number);
        break;
    case NUMBER_SYSTEM_DECIMAL:
        ret = logicDummyMethods.numberToDecimalString(number);
        break;
    case NUMBER_SYSTEM_HEX:
        ret = logicDummyMethods.numberToHexString(number);
        break;
    default:
        ret = new char[6] {'E', 'R', 'R', 'O', 'R', '\0', };
    }
    return ret;
}

/**
 * Aus dem Entwurfsdokument:
 * "So wird die Methode displayResult() von der Logik aufgerufen und
 * die nötigen Parameter übergeben, sobald etwas errechnet wurde, um
 * das Ergebnis darstellen zu lassen; falls ein Fehler vorliegt, wird
 * displayError() aufgerufen.
 * Die Parameter werden dann in der InternalState - Klasse gespeichert.
 * Anschließend wird von den Methoden aus der DisplayArray - Klasse
 * Gebrauch gemacht, um die entsprechenden Werte in das Array zu schreiben,
 * wobei das Array das Display simuliert."
 */
void UIOutput::displayError(char *message) {
    display.clearRow(DISPLAY_ROWS - 1);
    display.setRow(message, DISPLAY_ROWS - 1);
}

/**
 * (siehe Dokumentation der Methode "displayError")
 */
void UIOutput::displayResult(long long number, bool* flags) {}

void UIOutput::sendResultSerial() {}

/**
 * Aus dem Entwurfsdokument:
 * "Falls sich nur etwas durch Eingabe des Benutzers ändert,
 *  ohne das dafür eine Rechnung erfolgen muss, so ruft die Input - Klasse die
 *  update()- bzw. updateLED() - Methoden der Output-Klasse auf, um eine
 *  Aktualisierung der Darstellung auf dem Display bzw. der LEDs zu erzielen.
 *  Die Output - Klasse holt sich dann die entsprechenden Werte aus der
 *  InternalState - Klasse und schreibt diese ins Array.
 *  Zum Schluss werden die Methoden aufgerufen, die das Hardware-Modul
 *  bereitstellt."
 */
void UIOutput::update() {}

/**
 * (siehe Dokumentation der Methode "update")
 */
void UIOutput::updateLED() {}


