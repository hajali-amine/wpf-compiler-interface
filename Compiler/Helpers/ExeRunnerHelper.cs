using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Threading.Tasks;

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

            bool isErrored = proc.StandardError.Peek() != -1;
            TextReader stream = isErrored ? proc.StandardError : proc.StandardOutput;

            return (isErrored, stream.ReadToEnd());
        }
    }
}
