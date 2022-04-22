using System.Diagnostics;
using System.IO;

namespace Compiler.Helpers
{
    public static class ExeRunnerHelper
    {
        public static (bool, string) RunExe(string exe, string content)
        {
            Process proc = new Process
            {
                StartInfo = new ProcessStartInfo
                {
                    FileName = exe,
                    RedirectStandardInput = true,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    CreateNoWindow = true,
                    RedirectStandardError = true
                }
            };

            _ = proc.Start();
            proc.StandardInput.AutoFlush = true;
            proc.StandardInput.WriteLine(content);
            proc.StandardInput.Close();

            bool isError = proc.StandardError.Peek() != -1;
            TextReader stream = isError ? proc.StandardError : proc.StandardOutput;

            return (isError, stream.ReadToEnd());
        }

        public static string OutputExe(string exe, string content)
        {
            Process proc = new Process
            {
                StartInfo = new ProcessStartInfo
                {
                    FileName = exe,
                    RedirectStandardInput = true,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    CreateNoWindow = true,
                    RedirectStandardError = true
                }
            };

            _ = proc.Start();
            proc.StandardInput.AutoFlush = true;
            proc.StandardInput.WriteLine(content);
            proc.StandardInput.Close();

            return proc.StandardOutput.ReadToEnd();
        }
    }
}
