# Created by: Evgeniy Kosov <evgeniy@kosov.su>
# $FreeBSD: ports/devel/p5-Log-Any-App/Makefile,v 1.11 2013/01/06 15:11:58 svnexp Exp $

PORTNAME=	Log-Any-App
PORTVERSION=	0.42
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	An easy way to use Log::Any in applications

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-File-HomeDir>=0:${PORTSDIR}/devel/p5-File-HomeDir \
		p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-Log-Any-Adapter-Log4perl>=0:${PORTSDIR}/devel/p5-Log-Any-Adapter-Log4perl \
		p5-Log-Dispatch>=0:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Log-Dispatch-Dir>=0.08:${PORTSDIR}/devel/p5-Log-Dispatch-Dir \
		p5-Log-Dispatch-FileRotate>=0:${PORTSDIR}/devel/p5-Log-Dispatch-FileRotate
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp

PERL_MODBUILD=	yes

MAN3=		Log::Any::App.3

.include <bsd.port.mk>
