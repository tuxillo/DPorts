# New ports collection makefile for:	www/p5-Catalyst-Model-CDBI
# Date created:				04 May 2005
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Catalyst-Model-CDBI/Makefile,v 1.14 2012/11/17 06:02:46 svnexp Exp $
#

PORTNAME=	Catalyst-Model-CDBI
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CDBI model class for Catalyst

BUILD_DEPENDS=	p5-Class-DBI-Loader>=0:${PORTSDIR}/databases/p5-Class-DBI-Loader \
		p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:${PORTSDIR}/www/p5-Catalyst-Devel \
		p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		p5-MRO-Compat>=0.11:${PORTSDIR}/devel/p5-MRO-Compat

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Helper::Model::CDBI.3 \
	Catalyst::Model::CDBI.3

.include <bsd.port.mk>
