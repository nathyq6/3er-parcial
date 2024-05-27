#using <System.Windows.Forms>;

namespace InterfazSalir {
  public class Form1 : Form {
    private:
      Button^ botonSalir;

    public:
      Form1() {
        // Inicializar componentes
        InitializeComponent();
      }

    private: void button1_Click(object sender, EventArgs e) {
        // Cerrar la ventana al hacer clic en el botón
        Close();
      }
  };
}
