# New ports collection makefile for:	SVN::Dumpfile
# Date created:		2009-04-17
# Whom:			Greg Larkin <glarkin@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-SVN-Dumpfile/Makefile,v 1.5 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	SVN-Dumpfile
PORTVERSION=	0.13.107
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Perl extension to access and manipulate Subversion dumpfiles

BUILD_DEPENDS=	p5-Data-GUID>=0:${PORTSDIR}/devel/p5-Data-GUID \
		p5-TimeDate>=2.27:${PORTSDIR}/devel/p5-TimeDate \
		p5-IO>=1.2301:${PORTSDIR}/devel/p5-IO \
		p5-Readonly>=1.03:${PORTSDIR}/devel/p5-Readonly
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		SVN::Dumpfile.3 \
		SVN::Dumpfile::Node.3 \
		SVN::Dumpfile::Node::Content.3 \
		SVN::Dumpfile::Node::Headers.3 \
		SVN::Dumpfile::Node::Properties.3 \
		SVN::Dumpfile::Tutorial.3

.include <bsd.port.mk>
