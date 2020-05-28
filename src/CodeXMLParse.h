/* radare - LGPL - Copyright 2019 - thestr4ng3r */

#ifndef R2GHIDRA_CODEXMLPARSE_H
#define R2GHIDRA_CODEXMLPARSE_H

#include <r_util/r_annotated_code.h>
#include <r_core.h>

class Funcdata;

R_API RAnnotatedCode *ParseCodeXML(Funcdata *func, const char *xml);
//Extra
R_API RAnnotatedCode* DecompileToRAnnotatedCode(RCore *core);
//Extra
#endif //R2GHIDRA_CODEXMLPARSE_H
