/* ex: set ro ft=c: -*- mode: c; buffer-read-only: t -*-
   !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
   This file is built by regen_perly.pl from perly.y.
   Any changes made here will be lost!
 */

#define PERL_BISON_VERSION  30000

#ifdef PERL_CORE
/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    GRAMPROG = 258,
    GRAMEXPR = 259,
    GRAMBLOCK = 260,
    GRAMBARESTMT = 261,
    GRAMFULLSTMT = 262,
    GRAMSTMTSEQ = 263,
    BAREWORD = 264,
    METHOD = 265,
    FUNCMETH = 266,
    THING = 267,
    PMFUNC = 268,
    PRIVATEREF = 269,
    QWLIST = 270,
    FUNC0OP = 271,
    FUNC0SUB = 272,
    UNIOPSUB = 273,
    LSTOPSUB = 274,
    PLUGEXPR = 275,
    PLUGSTMT = 276,
    CLASSDECL = 277,
    LABEL = 278,
    FORMAT = 279,
    SUB = 280,
    METHDECL = 281,
    MULTIDECL = 282,
    ANONSUB = 283,
    EXTERNSUB = 284,
    PACKAGE = 285,
    USE = 286,
    WHILE = 287,
    UNTIL = 288,
    IF = 289,
    UNLESS = 290,
    ELSE = 291,
    ELSIF = 292,
    CONTINUE = 293,
    FOR = 294,
    GIVEN = 295,
    WHEN = 296,
    DEFAULT = 297,
    LOOPEX = 298,
    DOTDOT = 299,
    YADAYADA = 300,
    FUNC0 = 301,
    FUNC1 = 302,
    FUNC = 303,
    UNIOP = 304,
    LSTOP = 305,
    RELOP = 306,
    EQOP = 307,
    MULOP = 308,
    UNIMULOP = 309,
    ADDOP = 310,
    DOLSHARP = 311,
    DO = 312,
    HASHBRACK = 313,
    NOAMP = 314,
    LOCAL = 315,
    MY = 316,
    HAS = 317,
    REQUIRE = 318,
    COLONATTR = 319,
    FORMLBRACK = 320,
    FORMRBRACK = 321,
    PREC_LOW = 322,
    OROP = 323,
    DOROP = 324,
    ANDOP = 325,
    NOTOP = 326,
    ASSIGNOP = 327,
    OROR = 328,
    DORDOR = 329,
    ANDAND = 330,
    BITOROP = 331,
    BITANDOP = 332,
    SHIFTOP = 333,
    MATCHOP = 334,
    UMINUS = 335,
    REFGEN = 336,
    POWOP = 337,
    POWCOP = 338,
    PREINC = 339,
    PREDEC = 340,
    POSTINC = 341,
    POSTDEC = 342,
    POSTJOIN = 343,
    ARROW = 344
  };
#endif

/* Tokens.  */
#define GRAMPROG 258
#define GRAMEXPR 259
#define GRAMBLOCK 260
#define GRAMBARESTMT 261
#define GRAMFULLSTMT 262
#define GRAMSTMTSEQ 263
#define BAREWORD 264
#define METHOD 265
#define FUNCMETH 266
#define THING 267
#define PMFUNC 268
#define PRIVATEREF 269
#define QWLIST 270
#define FUNC0OP 271
#define FUNC0SUB 272
#define UNIOPSUB 273
#define LSTOPSUB 274
#define PLUGEXPR 275
#define PLUGSTMT 276
#define CLASSDECL 277
#define LABEL 278
#define FORMAT 279
#define SUB 280
#define METHDECL 281
#define MULTIDECL 282
#define ANONSUB 283
#define EXTERNSUB 284
#define PACKAGE 285
#define USE 286
#define WHILE 287
#define UNTIL 288
#define IF 289
#define UNLESS 290
#define ELSE 291
#define ELSIF 292
#define CONTINUE 293
#define FOR 294
#define GIVEN 295
#define WHEN 296
#define DEFAULT 297
#define LOOPEX 298
#define DOTDOT 299
#define YADAYADA 300
#define FUNC0 301
#define FUNC1 302
#define FUNC 303
#define UNIOP 304
#define LSTOP 305
#define RELOP 306
#define EQOP 307
#define MULOP 308
#define UNIMULOP 309
#define ADDOP 310
#define DOLSHARP 311
#define DO 312
#define HASHBRACK 313
#define NOAMP 314
#define LOCAL 315
#define MY 316
#define HAS 317
#define REQUIRE 318
#define COLONATTR 319
#define FORMLBRACK 320
#define FORMRBRACK 321
#define PREC_LOW 322
#define OROP 323
#define DOROP 324
#define ANDOP 325
#define NOTOP 326
#define ASSIGNOP 327
#define OROR 328
#define DORDOR 329
#define ANDAND 330
#define BITOROP 331
#define BITANDOP 332
#define SHIFTOP 333
#define MATCHOP 334
#define UMINUS 335
#define REFGEN 336
#define POWOP 337
#define POWCOP 338
#define PREINC 339
#define PREDEC 340
#define POSTINC 341
#define POSTDEC 342
#define POSTJOIN 343
#define ARROW 344

/* Value type.  */
#ifdef PERL_IN_TOKE_C
static bool
S_is_opval_token(int type) {
    switch (type) {
    case BAREWORD:
    case CLASSDECL:
    case FUNC0OP:
    case FUNC0SUB:
    case FUNCMETH:
    case LSTOPSUB:
    case METHOD:
    case PLUGEXPR:
    case PLUGSTMT:
    case PMFUNC:
    case PRIVATEREF:
    case QWLIST:
    case THING:
    case UNIOPSUB:
	return 1;
    }
    return 0;
}
#endif /* PERL_IN_TOKE_C */
#endif /* PERL_CORE */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

    I32	ival; /* __DEFAULT__ (marker for regen_perly.pl;
				must always be 1st union member) */
    char *pval;
    OP *opval;
    GV *gvval;

};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);


#if YYDEBUG
#define YYPRINT
#endif

/* Generated from:
 * 6bbc06e04b2e56089a11d643b6d51f21b8d7cb303e31cec4375a30085aba1208 perly.y
 * 5132b115dedc64fcaea289ebf11528abd6f23d9b88e5247a236e1116603edcdb regen_perly.pl
 * ex: set ro: */
