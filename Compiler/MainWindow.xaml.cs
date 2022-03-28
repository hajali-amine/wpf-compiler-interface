using Compiler.Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Compiler
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        public void OnCompileButtonClicked(object sender, RoutedEventArgs e)
        {
            _ = FileHelper.WriteFile(this.InputBox.Text, "CeciEstUnTest.txt");
            string output = String.Join("\n", FileHelper.RunExe());
            this.OutputBlock.Text = output;
        }
    }
}
