# New ports collection makefile for:	p5-PerlIO-Layers
# Date created:		2011-08-27
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-PerlIO-Layers/Makefile,v 1.8 2012/11/17 05:56:26 svnexp Exp $
#

PORTNAME=	PerlIO-Layers
PORTVERSION=	0.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Query the properties/capabilities of filehandle

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils

PERL_MODBUILD=	yes

MAN3=		PerlIO::Layers.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
TEST_DEPENDS+=	p5-Test-Simple>=0.82:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
