﻿using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Bot.Builder.Dialogs;

namespace Microsoft.Bot.Builder.Dialogs.Flow
{
    /// <summary>
    /// Defines a dialog step  
    /// </summary>
    public interface IDialogStep
    {
        /// <summary>
        /// (OPTIONAL) Id of a command
        /// </summary>
        string Id { get; set; }

        /// <summary>
        /// Execute an step 
        /// </summary>
        /// <param name="context"></param>
        /// <returns>DialogTurnResult or string</returns>
        Task<object> Execute(DialogContext dialogContext, CancellationToken cancellationToken);
    }

}