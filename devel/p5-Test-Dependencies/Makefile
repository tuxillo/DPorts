# New ports collection makefile for:    p5-Test-Dependencies
# Date created:				2006-07-12
# Whom:	      				Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
#
# $FreeBSD: ports/devel/p5-Test-Dependencies/Makefile,v 1.14 2012/11/17 05:56:32 svnexp Exp $
#

PORTNAME=	Test-Dependencies
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Ensure that your Makefile.PL specifies all module dependencies

BUILD_DEPENDS=	p5-rpm-build-perl>=0:${PORTSDIR}/devel/p5-rpm-build-perl \
		p5-File-Find-Rule>=0:${PORTSDIR}/devel/p5-File-Find-Rule \
		p5-IPC-Cmd>=0:${PORTSDIR}/devel/p5-IPC-Cmd \
		p5-Pod-Strip>=0:${PORTSDIR}/textproc/p5-Pod-Strip \
		p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::Dependencies.3 \
		Test::Dependencies::Heavy.3 \
		Test::Dependencies::Light.3

.include <bsd.port.mk>
