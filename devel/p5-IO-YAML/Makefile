# New ports collection makefile for:	p5-IO-YAML
# Date created:		2006-08-17
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-IO-YAML/Makefile,v 1.9 2012/11/17 05:56:19 svnexp Exp $
#

PORTNAME=	IO-YAML
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read and write YAML streams incrementally

BUILD_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML
RUN_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML

PERL_MODBUILD=	yes

MAN3=		IO::YAML.3

.include <bsd.port.mk>
