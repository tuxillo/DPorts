# New ports collection makefile for:	p5-WWW-Google-Video
# Date created:		2006-07-19
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: ports/www/p5-WWW-Google-Video/Makefile,v 1.8 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Google-Video
PORTVERSION=	0.4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	An interface to fetch the Google Video Information

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		WWW::Google::Video.3

.include <bsd.port.mk>
