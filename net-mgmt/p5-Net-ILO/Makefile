# New ports collection makefile for:	p5-Net-ILO
# Date created:				2012-04-03
# Whom:					Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: ports/net-mgmt/p5-Net-ILO/Makefile,v 1.2 2012/11/17 06:00:35 svnexp Exp $
#

PORTNAME=	Net-ILO
PORTVERSION=	0.54
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Interface to HP Integrated Lights-Out

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-Socket-SSL>0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-XML-Simple>0:${PORTSDIR}/textproc/p5-XML-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

PERL_CONFIGURE=	yes

MAN3=		Net::ILO.3

.include <bsd.port.mk>
