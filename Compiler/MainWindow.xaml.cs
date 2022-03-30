using Compiler.Helpers;
using System.Windows;
using System.Windows.Input;
using System.Windows.Media;

namespace Compiler
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        const string DEFAULT_INPUT_TEXT = "Your Java code here...";

        public MainWindow()
        {
            this.InitializeComponent();
            this.SetHandlers();
        }

        private void SetHandlers()
        {
            this.InputBox.GotKeyboardFocus += this.OnInputBoxGotFocused;
            this.InputBox.LostKeyboardFocus += this.OnInputBoxLostFocused;
            this.OutputBlock.MouseDown += this.RemoveKeyboard;
            this.CompileButton.MouseDown += this.RemoveKeyboard;
        }


        private void OnCompileButtonClicked(object sender, RoutedEventArgs e)
        {
            if (this.InputBox.Foreground == Brushes.DarkGray)
            {
                this.OutputBlock.Text = "There is no code";
                this.OutputBlock.Foreground = Brushes.DarkGray;
            }
            else
            {
                (bool isError, string output) result = ExeRunnerHelper.RunExe(exe: "parser.exe", content: this.InputBox.Text);
                this.OutputBlock.Text = result.output;
                this.OutputBlock.Foreground = result.isError ? Brushes.Red : Brushes.Black;
            }
        }

        private void OnInputBoxGotFocused(object sender, RoutedEventArgs e)
        {
            if (this.InputBox.Text == DEFAULT_INPUT_TEXT && this.InputBox.Foreground == Brushes.DarkGray)
            {
                this.InputBox.FontStyle = FontStyles.Normal;
                this.InputBox.Text = string.Empty;
                this.InputBox.Foreground = Brushes.Black;
            }
        }

        private void OnInputBoxLostFocused(object sender, RoutedEventArgs e)
        {
            if (this.InputBox.Text.Trim().Equals(string.Empty))
            {
                this.InputBox.FontStyle = FontStyles.Italic;
                this.InputBox.Text = DEFAULT_INPUT_TEXT;
                this.InputBox.Foreground = Brushes.DarkGray;
            }
        }

        private void RemoveKeyboard(object sender, RoutedEventArgs e)
        {
            Keyboard.ClearFocus();
        }
    }
}
