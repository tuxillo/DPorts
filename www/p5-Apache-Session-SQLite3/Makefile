# New ports collection makefile for:	p5-Apache-Session-SQLite3
# Date created:				March 17, 2005
# Whom:					clsung
#
# $FreeBSD: ports/www/p5-Apache-Session-SQLite3/Makefile,v 1.5 2012/11/17 06:02:44 svnexp Exp $
#

PORTNAME=	Apache-Session-SQLite3
PORTVERSION=	0.03
CATEGORIES=	www databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Use DBD::SQLite 1.x for Apache::Session storage

BUILD_DEPENDS=	p5-Apache-Session>=0:${PORTSDIR}/www/p5-Apache-Session \
		p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Apache::Session::SQLite3.3

.include <bsd.port.mk>
