# New ports collection makefile for:  BitchX
# Date created:                   Mon Jan  8 2001
# Whom:                           clive
#
# $FreeBSD: ports/chinese/bitchx/Makefile,v 1.16 2012/11/17 05:54:55 svnexp Exp $
#

PORTNAME=	BitchX
PORTREVISION=	5
CATEGORIES=	chinese
PKGNAMEPREFIX=	zh-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A zh-tw cursor movement friendly, wrapping clean BitchX

MASTERDIR=	${.CURDIR}/../../irc/bitchx
EXTRA_PATCHES=	${.CURDIR}/files/patch-source::input.c \
		${.CURDIR}/files/patch-include::config.h \
		${.CURDIR}/files/patch-source::screen.c

WITH_LATIN=	YES
# Cursor movement and words wrapping aren't hacked if compiled with gnome.
WITHOUT_GNOME=	YES
# If without gnome, esound support isn't needed.
WITHOUT_ESOUND=	YES

.include "${MASTERDIR}/Makefile"
