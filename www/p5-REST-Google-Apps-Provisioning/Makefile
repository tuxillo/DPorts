# New ports collection makefile for:	p5-REST-Google-Apps-Provisioning
# Date created:		2009-08-06
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-REST-Google-Apps-Provisioning/Makefile,v 1.11 2012/11/17 06:02:53 svnexp Exp $
#

PORTNAME=	REST-Google-Apps-Provisioning
PORTVERSION=	1.1.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SSCHNEID
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Perl library to Google\'s RESTful Apps API

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		REST::Google::Apps::Provisioning.3

.include <bsd.port.mk>
