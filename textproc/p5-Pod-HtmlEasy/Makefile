# New ports collection makefile for:	p5-Pod-HtmlEasy
# Date created:	   			21 Jan, 201
# Whom:		  			Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Pod-HtmlEasy/Makefile,v 1.4 2012/11/17 06:02:07 svnexp Exp $
#

PORTNAME=	Pod-HtmlEasy
PORTVERSION=	1.0108
CATEGORIES=	textproc devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Generate personalized HTML from PODs

BUILD_DEPENDS=	p5-version>=0.72:${PORTSDIR}/devel/p5-version \
		p5-File-Slurp>=9999.13:${PORTSDIR}/devel/p5-File-Slurp \
		p5-IPC-Run>=0.8:${PORTSDIR}/devel/p5-IPC-Run \
		p5-Exporter-Easy>=0:${PORTSDIR}/devel/p5-Exporter-Easy \
		p5-Readonly>=1.03:${PORTSDIR}/devel/p5-Readonly \
		p5-Regexp-Common>=2.12:${PORTSDIR}/textproc/p5-Regexp-Common \
		p5-Pod-Escapes>=0:${PORTSDIR}/textproc/p5-Pod-Escapes
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		pod2indexed_html.pl.1
MAN3=		Pod::HtmlEasy.3

.include <bsd.port.mk>
