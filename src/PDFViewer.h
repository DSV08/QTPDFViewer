https://doc.qt.io/archives/qq/qq27-poppler.html
https://wiki.qt.io/Handling_PDF#Using_QtPDF_2
https://wiki.qt.io/Exporting_a_document_to_PDF
https://github.com/qt-labs/qtpdf/blob/dev/examples/pdf/pdfviewer/mainwindow.cpp


#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PDFViewer.h"
#include <QPrinter>

namespace Ui 
{
	class PDFViewer;
}

class PDFViewer : public QMainWindow
{
	Q_OBJECT

public:

	/*!
	*@brief Construtor
	*Construtor da Classe PDFViewer
	* @param parent Ponteiro para um Widget da janela principal
	*/
	PDFViewer(QWidget *parent = Q_NULLPTR);
	//explicit PDFViewer(QWidget *parent = nullptr);

	/*!
	* @brief Destrutor
	* Destrutor da Classe PDFViewer
	*/
	~PDFViewer();


	//Necess�rio?
	/*!
	* @brief M�todo Get.
	* M�todo para obter o caminho do PDF que ser� aberto
	* @return QString retona o caminho do arquivo PDF que esta sendo visualizado
	*/
	QString getArquivoCorrente();


private:

	/*!
	* @brief Ui
	* objetos de interface do Qt
	*/
	Ui::PDFViewer *ui;

	/*!
	* @brief Cria��o dos conects
	* M�todo para estabelecer a rela��o de ac�o e rea��o dos bot�es e suas funcionalidades
	*/
	void criarConects();

	//Necess�rio?
	/*!
	* @brief Caminho do PDF em uso
	* Variavel global que armazena o caminho do PDF que est� sendo editado
	*/
	QString currentFileName;

	/*!
	* @brief Limpar a interface
	* M�todo para resetar as configura��es do visualizador (caminho do PDF em uso, t�tulo visualizador, etc)
	* dando assim um clean na interface
	*@return bool Retorna verdade se foi possivel limpar a interface com sucesso
	*/
	bool limparInterface();

	//Necess�rio?
	/*!
	*@brief T�tulo
	*M�todo para setar como t�tulo do visualizador o nome do PDF em uso
	*ou uma mensagem vazia caso n�o tenha nenhum PDF sendo visualizado
	*@param msg Mensagem com o nome do PDF que ser� construido.
	*/
	void escreveTituloJanelaPrincipal(QString msg = "");


private slots:

	/*!
	* @brief Slot abrir
	* Esse slot � excecutado quando a op��o abrir � escolhida, permitindo ao usuario escolher um PDF
	* que ser� aberto para visualiza��o
	*
	*/
	void slotAbrir();

	/*!
	* @brief printpreview
	* Esse  M�todo � utilizado para exibir uma tela com a visualiza��o do PDF
	*/
	void printPreview();
};
