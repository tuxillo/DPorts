# New ports collection makefile for:	chk4mail
# Date created:				18 October 2002
# Whom:					johans
#
# $FreeBSD: ports/mail/chk4mail/Makefile,v 1.17 2012/11/17 18:26:12 svnexp Exp $
#

PORTNAME=	chk4mail
PORTVERSION=	2.26
CATEGORIES=	mail
MASTER_SITES=	ftp://ftp.stack.nl/pub/users/johans/chk4mail/ \
		ftp://mud.stack.nl/pub/chk4mail/

MAINTAINER=	johans@FreeBSD.org
COMMENT=	A utility to quickly check multiple folders for new email

PLIST_FILES=	bin/chk4mail bin/chkimap

MAN1=		chk4mail.1 chkimap.1

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-imap

.include <bsd.port.mk>
