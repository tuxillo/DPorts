# New ports collection makefile for:	p5-Net-Flickr-RDF
# Date created:		2006-07-29
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: ports/www/p5-Net-Flickr-RDF/Makefile,v 1.10 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	Net-Flickr-RDF
PORTVERSION=	2.2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Describe Flickr photos as RDF

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-Flickr-API>=1.7:${PORTSDIR}/www/p5-Net-Flickr-API \
		p5-RDF-Simple>=0.22:${PORTSDIR}/textproc/p5-RDF-Simple \
		p5-TimeDate>=1.16:${PORTSDIR}/devel/p5-TimeDate
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::Flickr::RDF.3

.include <bsd.port.mk>
