# New ports collection makefile for:	p5-CGI-Simple
# Date created:		16 November 2004
# Whom:			Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-CGI-Simple/Makefile,v 1.16 2012/11/17 06:02:46 svnexp Exp $
#

PORTNAME=	CGI-Simple
PORTVERSION=	1.113
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ANDYA
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A simple totally OO CGI interface that is CGI.pm compliant

TEST_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy

PERL_CONFIGURE=	yes

MAN3=		CGI::Simple.3 \
		CGI::Simple::Cookie.3 \
		CGI::Simple::Standard.3 \
		CGI::Simple::Util.3

.include <bsd.port.mk>
