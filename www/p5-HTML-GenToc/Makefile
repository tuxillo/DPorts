# New ports collection makefile for:	www/p5-HTML-GenToc
# Date created:				29 Mar 2009
# Whom:					Lars Balker Rasmussen <lbr@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTML-GenToc/Makefile,v 1.6 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-GenToc
PORTVERSION=	3.20
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate a Table of Contents for HTML documents

RUN_DEPENDS=	p5-HTML-LinkList>=0.1501:${PORTSDIR}/www/p5-HTML-LinkList \
		p5-HTML-SimpleParse>=0.10:${PORTSDIR}/www/p5-HTML-SimpleParse \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-Getopt-ArgvFile>=1.09:${PORTSDIR}/devel/p5-Getopt-ArgvFile
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN1=	hypertoc.1
MAN3=	HTML::GenToc.3

.include <bsd.port.mk>
