using System.Diagnostics;
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
        private void Menu_NewWindow(object sender, RoutedEventArgs e)
        {
            string exePath = Process.GetCurrentProcess().MainModule.FileName;
            System.Diagnostics.Process.Start(exePath);
        }

        private void Menu_Set(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Open command executed");
        }

        private void Menu_Exit(object sender, RoutedEventArgs e)
        {
            Environment.Exit(-200);
        }
    }
}