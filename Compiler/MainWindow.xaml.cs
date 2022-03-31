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
                if (sender == this.CompileButton)
                {
                    this.Compile();
                }

                if (sender == this.TokenizerButton)
                {
                    this.Tokenize();
                }
            }
        }

        private void Compile()
        {
            (bool isError, string output) = ExeRunnerHelper.RunExe(exe: "parser.exe", content: this.InputBox.Text);
            this.OutputBlock.Text = output.Equals(string.Empty) ? "Code compiled successfully!" : output;
            this.OutputBlock.Foreground = isError ? Brushes.Red : Brushes.Black;
        }

        private void Tokenize()
        {
            string output = ExeRunnerHelper.OutputExe(exe: "tokenizer.exe", content: this.InputBox.Text);
            this.OutputBlock.Text = output;
            this.OutputBlock.Foreground = Brushes.Green;
        }

        private void OnInputBoxGotFocused(object sender, RoutedEventArgs e)
        {
            if (this.InputBox.Text == DEFAULT_INPUT_TEXT && this.InputBox.Foreground == Brushes.DarkGray)
            {
                this.InputBox.ShowLineNumbers = true;
                this.InputBox.FontStyle = FontStyles.Normal;
                this.InputBox.Text = string.Empty;
                this.InputBox.Foreground = Brushes.Black;
            }
        }

        private void OnInputBoxLostFocused(object sender, RoutedEventArgs e)
        {
            if (this.InputBox.Text.Trim().Equals(string.Empty))
            {
                this.InputBox.ShowLineNumbers = false;
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
