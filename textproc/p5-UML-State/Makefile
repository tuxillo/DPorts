# New ports collection makefile for:	p5-UML-State
# Date created:				October 15th 2003
# Whom:	      				Cheng-Lung Sung <clsung@dragon2.net>
#
# $FreeBSD: ports/textproc/p5-UML-State/Makefile,v 1.11 2012/11/17 06:02:11 svnexp Exp $
#

PORTNAME=	UML-State
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A perl module that produce simple UML state diagrams

BUILD_DEPENDS=	p5-XML-DOM>=0:${PORTSDIR}/textproc/p5-XML-DOM
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		drawstatexml.pl.1 drawstate.pl.1
MAN3=		UML::drawstate.3 \
		UML::drawstatexml.3 \
		UML::State.3

.include <bsd.port.mk>
