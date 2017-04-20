/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_ZZ_PARSER_HH_INCLUDED
# define YY_ZZ_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zzdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    DOUBLE = 259,
    NAME = 260,
    STRING = 261,
    SYSCMD = 262,
    ENDCMD = 263,
    MODEL = 264,
    DATA = 265,
    IN = 266,
    TO = 267,
    INITS = 268,
    PARAMETERS = 269,
    COMPILE = 270,
    INITIALIZE = 271,
    ADAPT = 272,
    UPDATE = 273,
    BY = 274,
    MONITORS = 275,
    MONITOR = 276,
    TYPE = 277,
    SET = 278,
    CLEAR = 279,
    THIN = 280,
    CODA = 281,
    STEM = 282,
    EXIT = 283,
    NCHAINS = 284,
    CHAIN = 285,
    LOAD = 286,
    UNLOAD = 287,
    SAMPLER = 288,
    SAMPLERS = 289,
    RNGTOK = 290,
    FACTORY = 291,
    FACTORIES = 292,
    SEED = 293,
    LIST = 294,
    STRUCTURE = 295,
    DIM = 296,
    NA = 297,
    R_NULL = 298,
    DIMNAMES = 299,
    ITER = 300,
    ARROW = 301,
    ENDDATA = 302,
    ASINTEGER = 303,
    DIRECTORY = 304,
    CD = 305,
    PWD = 306,
    RUN = 307,
    ENDSCRIPT = 308
  };
#endif
/* Tokens.  */
#define INT 258
#define DOUBLE 259
#define NAME 260
#define STRING 261
#define SYSCMD 262
#define ENDCMD 263
#define MODEL 264
#define DATA 265
#define IN 266
#define TO 267
#define INITS 268
#define PARAMETERS 269
#define COMPILE 270
#define INITIALIZE 271
#define ADAPT 272
#define UPDATE 273
#define BY 274
#define MONITORS 275
#define MONITOR 276
#define TYPE 277
#define SET 278
#define CLEAR 279
#define THIN 280
#define CODA 281
#define STEM 282
#define EXIT 283
#define NCHAINS 284
#define CHAIN 285
#define LOAD 286
#define UNLOAD 287
#define SAMPLER 288
#define SAMPLERS 289
#define RNGTOK 290
#define FACTORY 291
#define FACTORIES 292
#define SEED 293
#define LIST 294
#define STRUCTURE 295
#define DIM 296
#define NA 297
#define R_NULL 298
#define DIMNAMES 299
#define ITER 300
#define ARROW 301
#define ENDDATA 302
#define ASINTEGER 303
#define DIRECTORY 304
#define CD 305
#define PWD 306
#define RUN 307
#define ENDSCRIPT 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 92 "../../../../../jags-4_patched/src/terminal/parser.yy" /* yacc.c:1909  */

  int intval;
  double val;
  std::string *stringptr;
  jags::ParseTree *ptree;
  std::vector<jags::ParseTree*> *pvec;
  std::vector<double> *vec;
  std::vector<long> *ivec;

#line 170 "parser.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;

int zzparse (void);

#endif /* !YY_ZZ_PARSER_HH_INCLUDED  */
