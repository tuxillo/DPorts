# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: ports/devel/p5-Class-AutoClass/Makefile,v 1.11 2012/11/17 05:56:06 svnexp Exp $

PORTNAME=	Class-AutoClass
PORTVERSION=	1.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	autoclass_v${PORTVERSION:S/./_/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automatically define simple get and set methods in an inheritance structure

RUN_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy
BUILD_DEPENDS:=	${RUN_DEPENDS} \
		p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

PERL_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/AutoClass

MAN3=		Class::AutoClass::Root.3 Class::AutoClass.3 Class::AutoClass::Args.3

.include <bsd.port.mk>
