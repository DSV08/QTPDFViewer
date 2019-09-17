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


	//Necessário?
	/*!
	* @brief Método Get.
	* Método para obter o caminho do PDF que será aberto
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
	* @brief Criação dos conects
	* Método para estabelecer a relação de acão e reação dos botões e suas funcionalidades
	*/
	void criarConects();

	//Necessário?
	/*!
	* @brief Caminho do PDF em uso
	* Variavel global que armazena o caminho do PDF que está sendo editado
	*/
	QString currentFileName;

	/*!
	* @brief Limpar a interface
	* Método para resetar as configurações do visualizador (caminho do PDF em uso, título visualizador, etc)
	* dando assim um clean na interface
	*@return bool Retorna verdade se foi possivel limpar a interface com sucesso
	*/
	bool limparInterface();

	//Necessário?
	/*!
	*@brief Título
	*Método para setar como título do visualizador o nome do PDF em uso
	*ou uma mensagem vazia caso não tenha nenhum PDF sendo visualizado
	*@param msg Mensagem com o nome do PDF que será construido.
	*/
	void escreveTituloJanelaPrincipal(QString msg = "");


private slots:

	/*!
	* @brief Slot abrir
	* Esse slot é excecutado quando a opção abrir é escolhida, permitindo ao usuario escolher um PDF
	* que será aberto para visualização
	*
	*/
	void slotAbrir();

	/*!
	* @brief printpreview
	* Esse  Método é utilizado para exibir uma tela com a visualização do PDF
	*/
	void printPreview();
};
