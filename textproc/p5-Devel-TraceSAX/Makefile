# New ports collection makefile for:    devel/p5-Devel-TraceSAX
# Date created:                         Dec  9 2005
# Whom:                                 Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Devel-TraceSAX/Makefile,v 1.5 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	Devel-TraceSAX
PORTVERSION=	0.021
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Trace SAX events

BUILD_DEPENDS=	p5-Devel-TraceCalls>=0.03:${PORTSDIR}/devel/p5-Devel-TraceCalls \
		p5-XML-SAX-Machines>=0:${PORTSDIR}/textproc/p5-XML-SAX-Machines
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Devel::TraceSAX.3

.include <bsd.port.mk>
