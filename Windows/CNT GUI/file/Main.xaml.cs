using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;


namespace CNT_GUI
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        private void Exit(object sender, RoutedEventArgs e)
        {
            Environment.Exit(-200);
        }

        private void Window_Move(object sender, MouseButtonEventArgs e)
        {
            this.DragMove();
        }

        //Menu Function
        private void Menu_New(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("New command executed");
        }

        private void Menu_Open(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Open command executed");
        }

        private void Menu_Save(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Save command executed");
        }

        private void Menu_Exit(object sender, RoutedEventArgs e)
        {
            Environment.Exit(-200);
        }
    }
}