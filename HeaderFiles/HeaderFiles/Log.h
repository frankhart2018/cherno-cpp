// Header guard, prevents multiple includes, similar to ifndef
#pragma once

void InitLog();
void Log(const char* message);


/*
Alternatively #pragma once can be rewritten as:-

#ifndef _LOG_H
#define _LOG_H


#endif
*/