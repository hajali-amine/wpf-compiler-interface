using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Threading.Tasks;

namespace Compiler.Helpers
{
    public static class FileHelper
    {
        public static async Task WriteFile(string text, string fileName)
        {
            await File.WriteAllTextAsync(path: fileName, contents: text);
        }

        public static (bool, List<string>) RunExe(string exe, string file)
        {
            var proc = new Process
            {
                StartInfo = new ProcessStartInfo
                {
                    FileName = exe,
                    Arguments = file,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    CreateNoWindow = true,
                    RedirectStandardError = true
                }
            };

            List<string> result = new List<string>();

            proc.Start();

            bool isErrored = proc.StandardError.Peek() != -1;
            var stream = isErrored ? proc.StandardError : proc.StandardOutput;
            while (!stream.EndOfStream)
            {
                result.Add(stream.ReadLine());
            }

            return (isErrored, result);
        }
    }
}
