# New ports collection makefile for:	pinentry-gtk2
# Date created:			27 Oct 2004
# Whom:				Jean-Yves Lefort <jylefort@brutele.be>
#
# $FreeBSD: ports/security/pinentry-gtk2/Makefile,v 1.5 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	pinentry

COMMENT=	GTK+ 2.0 version of the GnuPG password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk2
PORT_OPTIONS+=	GTK2

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
