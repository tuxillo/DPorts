# New ports collection makefile for:	p5-HTML-Table
# Date created:			Di  13 M�r 2001 19:37:25 CET
# Whom:				Andreas Klemm <andreas@klemm.gtn.com>
#
# $FreeBSD: ports/www/p5-HTML-Table/Makefile,v 1.23 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTML-Table
PORTVERSION=	2.08a
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate HTML tables for CGI scripts

PORTSCOUT=	skipv:2.08

PERL_CONFIGURE=	yes

MAN3=		HTML::Table.3

post-extract:
	@${REINPLACE_CMD} -e 's|2.08a|2.08_1|' ${WRKSRC}/lib/HTML/Table.pm
	${RM}  ${WRKSRC}/lib/HTML/Table.pm.bak

.include <bsd.port.mk>
