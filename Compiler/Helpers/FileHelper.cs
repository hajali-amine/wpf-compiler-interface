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
            await File.WriteAllTextAsync(fileName, text);
        }

        public static List<string> RunExe(string exe, string file)
        {
            var proc = new Process
            {
                StartInfo = new ProcessStartInfo
                {
                    FileName = exe,
                    Arguments = file,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    CreateNoWindow = true
                }
            };

            List<string> result = new List<string>();

            proc.Start();
            while (!proc.StandardOutput.EndOfStream)
            {
                result.Add(proc.StandardOutput.ReadLine());
            }
            //while (!proc.StandardError.EndOfStream)
            //{

            //}

            return result;
        }
    }
}
