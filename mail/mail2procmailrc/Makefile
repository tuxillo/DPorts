# ex:ts=8
# New ports collection makefile for:	mail2procmailrc
# Date created:			Dec 29, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/mail/mail2procmailrc/Makefile,v 1.8 2012/11/17 05:59:05 svnexp Exp $
#

PORTNAME=	mail2procmailrc
PORTVERSION=	0.9
CATEGORIES=	mail
MASTER_SITES=	http://www.tux.org/~timball/download/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	mail to procmailrc generator

RUN_DEPENDS=	p5-Curses>=0:${PORTSDIR}/devel/p5-Curses \
		p5-Curses-Widgets>=0:${PORTSDIR}/devel/p5-Curses-Widgets \
		p5-Mail-Tools>=0:${PORTSDIR}/mail/p5-Mail-Tools

USE_PERL5=	yes
NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/generateproc.pl ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/mail2procmail.pl ${PREFIX}/bin/mail2procmail

.include <bsd.port.mk>
