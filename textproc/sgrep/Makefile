# New ports collection makefile for: 	sgrep
# Date created:    			Apr 29 1998
# Whom: 				<koshy@india.hp.com>
#
# $FreeBSD: ports/textproc/sgrep/Makefile,v 1.10 2012/11/17 06:02:21 svnexp Exp $
#

PORTNAME=	sgrep
PORTVERSION=	0.99
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	ftp://ftp.cs.helsinki.fi/pub/Software/Local/Sgrep/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	jkoshy

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A `grep' for structured text like SGML and HTML

CONFLICTS=	sgrep2-1.*

MAN1=		sgrep.1

# Override the install target in the supplied makefile
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sgrep ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/sgrep.1 ${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/sample.sgreprc ${PREFIX}/share/sgreprc

.include <bsd.port.mk>
