# New ports collection makefile for:	HTML-Pager
# Date created:				Mon Jan  1 11:59:43 2001
# Whom:					will
#
# $FreeBSD: ports/www/p5-HTML-Pager/Makefile,v 1.11 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-Pager
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module for handling CGI HTML paging of arbitrary data

BUILD_DEPENDS=	p5-HTML-Template>=0:${PORTSDIR}/www/p5-HTML-Template
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::Pager.3

.include <bsd.port.mk>
